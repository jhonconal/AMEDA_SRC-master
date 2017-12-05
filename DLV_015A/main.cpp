#include <QCoreApplication>
#include <QDebug>
#include <QTime>
#ifdef Q_OS_LINUX
//#include <linux/i2c-dev.h>
#endif
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * @brief SLEEP
 * @param ms  睡眠时间
 * 睡眠函数
 */
void SLEEP(int ms){
    QTime dieTime = QTime::currentTime().addMSecs(ms);
    while ( QTime::currentTime() < dieTime ) {
        QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int fd;
    float pressure_val = 0.0;
    float mmhg_val = 0.0;

    char rbuf[10];
    char dlv015a_pressure[2];

    fd = open("/dev/DLV_015A", O_RDWR);
    if (fd < 0) {
        perror("open failed");
        exit(1);
    }
    while(1){
        if (read(fd, rbuf, 4) != 4) {
            perror("read failed");
            exit(1);
        } else {
            memset(dlv015a_pressure,0,sizeof(dlv015a_pressure));
            memcpy(dlv015a_pressure, rbuf, 2);
//            printf("dlv015a_pressure[0] = 0x%x\n", dlv015a_pressure[0]);
//            printf("dlv015a_pressure[1] = 0x%x\n", dlv015a_pressure[1]);
            pressure_val = (( (dlv015a_pressure[0] & 0x3f) << 8) |dlv015a_pressure[1]);
//            printf("dlv015a_pressure[0] = 0x%x\n", ((dlv015a_pressure[0] & 0x3f) << 8));
//            printf("pressure_val = 0x%x  ----- %f\n", pressure_val, pressure_val);
            mmhg_val = (((pressure_val - 1638) * 1.25 * 15) / 16384) * 51.715;
//            printf("mmhg_val = %f\n", mmhg_val);
            qDebug()<<"mmhg_val = "<<mmhg_val;
            SLEEP(20);
        }
    }
    close(fd);
    return a.exec();
}
