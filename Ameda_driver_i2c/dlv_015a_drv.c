#include <linux/module.h>
#include <linux/init.h>
#include <linux/slab.h>
#include <linux/fs.h>
#include <linux/kdev_t.h>
#include <linux/i2c.h>
#include <linux/device.h>
#include <linux/uaccess.h>
//#include <linux/err.h>

#define DEV_ADDR	0x28

struct dlv015a_dev{
	int dev_major;
	struct i2c_client *client;
	struct class *cls;
	struct device *dev;
};

struct dlv015a_dev *dlv015a_dev;


static int i2c_read_data(struct i2c_client *client, unsigned char reg, char *buf, int count)
{
	int ret = 0;
	struct i2c_adapter *adapter = client->adapter;
	struct i2c_msg msg[2];

	msg[0].addr = client->addr;
	msg[0].flags = 0;
	msg[0].len = 1;
	msg[0].buf = &reg;

	msg[1].addr = client->addr;
	msg[1].flags = I2C_M_RD,
	msg[1].len = count;
	msg[1].buf = buf;


	ret = i2c_transfer(adapter, msg, 2);
	if(ret < 0)
		printk(KERN_ERR"i2c_transfer error\n");
	return ret;
}

static int i2c_write_bytes(struct i2c_client *client, char *buf, int count)
{
	int ret = 0;
	
	struct i2c_msg msg;
	struct i2c_adapter *adapter = client->adapter;
	
	msg.addr = client->addr;
	msg.flags = 0,
	msg.len = count;
	msg.buf = buf;

	ret = i2c_transfer(adapter, &msg, 1);
	if(ret < 0)
		printk(KERN_ERR"i2c_transfer error\n");
	return ret;
}


static int dlv015a_open(struct inode *inode, struct file *file)
{
	return 0;
}

static ssize_t dlv015a_write(struct file *file, const char __user *buf, size_t size, loff_t *opps)
{
	int ret=0;
	char  *tmp;
	printk("%s() ------ %d\n", __func__, __LINE__);
	tmp =kmalloc(size,GFP_KERNEL);
	if(tmp==NULL)
	{
		printk("mallo failed!\n");
		return -ENOMEM;
	}

	ret =copy_from_user(tmp,buf,size);
	if(ret)
	{
		printk("copy data faile!\n");
		ret =-EFAULT;
		goto err_0;
	}
	
	
	ret = i2c_master_send(dlv015a_dev->client,tmp,size);
	if(ret < 0){
		printk("write byte failed!\n");
		ret =-EINVAL;
		goto err_0;
	}
	
	kfree(tmp);
	return size;
	
err_0:
	kfree(tmp);
	return ret;
}

static ssize_t dlv015a_read(struct file *file, char __user *buf, size_t size, loff_t *opps)
{
	int ret=0;
	char  *tmp;
	printk("%s() ------ %d\n", __func__, __LINE__);
	tmp =kmalloc(size,GFP_KERNEL);
	if(tmp==NULL)
	{
		printk("mallco failed!\n");
		return -ENOMEM;
	}
	
	
	i2c_read_data(dlv015a_dev->client, DEV_ADDR, tmp, size);
	//printk("%s() ------buf[0] = %d  -------%d\n", __func__,  buf[0], __LINE__);
	//printk("%s() ------buf[1] = %d  -------%d\n", __func__,  buf[1], __LINE__);
	//printk("%s() ------buf[2] = %d  -------%d\n", __func__,  buf[2], __LINE__);
	//printk("%s() ------buf[3] = %d  -------%d\n", __func__,  buf[3], __LINE__);
	
	
	if(ret < 0)
	{
		printk("write byte failed!\n");
		ret =-EINVAL;
		goto err_0;
	}
	//printk("tmp = %d-------------%d\n", tmp, __LINE__);
	ret = copy_to_user(buf, tmp, size);
	if(ret)
	{
		printk("copy data faile!\n");
		ret =-EFAULT;
		goto err_0;
	}

	kfree(tmp);

	return ret ? -EINVAL : size;

err_0:
	kfree(tmp);
	return ret;
}

int dlv015a_close(struct inode *inode, struct file *filp)
{
	return 0;
}



static const struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = dlv015a_open,
	.read = dlv015a_read,
	.write = dlv015a_write,
	.release = dlv015a_close,
};

void dlv015a_test(struct i2c_client *client, int len )
{
	//unsigned char reg = DEV_ADDR;
	int i;
	char buf[len];
	i2c_read_data(client, DEV_ADDR, buf, len);
	for(i = 0;  i < len; i++){
		
		printk("%s() ------buf[%d] = %d  -------%d\n", __func__, i, buf[i], __LINE__);
	}
	


}
int dlv015a_probe(struct i2c_client *client, const struct i2c_device_id *id)
{

	
	// ×Ö·ûÉè±¸¿ò¼Ü
	int ret;
	printk("%s() ------ %d\n", __func__, __LINE__);
	ret = i2c_check_functionality(client->adapter, I2C_FUNC_SMBUS_BYTE_DATA| I2C_FUNC_SMBUS_WORD_DATA);
	if(!ret)
	{
		printk("function is not support\n");
		return -ENODEV;
	}

	
	dlv015a_dev = kzalloc(sizeof(struct dlv015a_dev),  GFP_KERNEL);
	if(!dlv015a_dev)
	{
		printk(KERN_ERR "kzalloc error\n");
		return -ENOMEM;
	}
	
	dlv015a_dev->client = client;

	dlv015a_dev->dev_major = register_chrdev(0, "dlv015a", &fops);
	if(dlv015a_dev->dev_major < 0)
	{
		printk(KERN_ERR "register_chrdev error\n");
		ret =  -ENODEV;
		goto err_0;
		
	}

	dlv015a_dev->cls = class_create(THIS_MODULE, "dlv015a_class");
	if(IS_ERR(dlv015a_dev->cls))
	{
		printk(KERN_ERR "class_create error\n");
		ret =  PTR_ERR(dlv015a_dev->cls);
		goto err_1;
		
	}

	dlv015a_dev->dev = device_create(dlv015a_dev->cls, NULL, MKDEV(dlv015a_dev->dev_major,0),
					NULL, "DLV_015A");
	if(IS_ERR(dlv015a_dev->dev))
	{
		printk(KERN_ERR "class_create error\n");
		ret =  PTR_ERR(dlv015a_dev->dev);
		goto err_2;
		
	}
	printk("%s() ------ %d\n", __func__, __LINE__);

	return 0;

//err_3:
//	device_destroy(dlv015a_dev->cls, MKDEV(dlv015a_dev->dev_major, 0));
err_2:
	class_destroy(dlv015a_dev->cls);
err_1:
	unregister_chrdev(dlv015a_dev->dev_major, "dlv015a");
err_0:
	kfree(dlv015a_dev);
	return ret;

}


int dlv015a_remove(struct i2c_client *client)
{
	printk("%s() ------ %d\n", __func__, __LINE__);
	device_destroy(dlv015a_dev->cls, MKDEV(dlv015a_dev->dev_major, 0));
	class_destroy(dlv015a_dev->cls);
	unregister_chrdev(dlv015a_dev->dev_major, "dlv015a");
	kfree(dlv015a_dev);
	return 0;
}

struct i2c_device_id dlv015a_table[]={
	{"DLV_015A", 0},
	{ }

};


static struct i2c_driver dlv015a_drv = {
	.probe = dlv015a_probe,
	.remove = dlv015a_remove,
	.driver = {
		.owner = THIS_MODULE,
		.name = "DLV_015A",
	},
	.id_table = dlv015a_table,
};

static int __init dlv015a_init(void)
{
	//printk("---------%s----------\n", __FUNCTION__);
	printk("%s() ------ %d\n", __func__, __LINE__);
	return i2c_add_driver(&dlv015a_drv);
}

static void __exit dlv015a_exit(void)
{
	printk("%s() ------ %d\n", __func__, __LINE__);
	i2c_del_driver(&dlv015a_drv);
}

module_init(dlv015a_init)
module_exit(dlv015a_exit);
MODULE_LICENSE("GPL");

