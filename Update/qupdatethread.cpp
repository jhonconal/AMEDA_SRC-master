#include "qupdatethread.h"

QUpdateThread::QUpdateThread(QObject *parent) : QThread(parent)
{
    byteTemp = new char[4096];
#ifdef DESKTOP
    fromFileName = "/root/Desktop/Ameda";
    toFileName   = "/root/Desktop/WORKSPACE/Ameda";
#else
    fromFileName = "/media/sda4/Ameda";//此处需要看主板USB具体挂在哪里比如/media/sda1  
    toFileName   =  "/root/AMEDA/Ameda";
#endif
    tempSize =0;
}

void QUpdateThread::run()
{
    FromFile.setFileName(fromFileName);
    fromFilefd = FromFile.open(QIODevice::ReadOnly);
    if(!fromFilefd)
    {
#ifdef DEBUG
        qDebug()<<"打开文件失败";
#endif
        emit OpenUDiskFileErrorSignal();//QMessageBox显示错误
    }else {//打开文件成功
        fileSize = FromFile.size();//获取文件总大小
        emit setProgressRangeSignal(fileSize);//发送信号Range
        //发现U盘文件
#ifndef DEBUG
        qDebug()<<"Detect the System file."<<"SIZE:"<<fileSize;
#endif

#ifdef DESKTOP
        DESKTOP_RM;
        //        system("rm -rf /root/Desktop/WORKSPACE/Ameda");
#else
        iMx6_RM;
        //        system("rm -rf /root/AMEDA/Ameda");
#endif
        Tofile.setFileName(toFileName);
        toFilefd = Tofile.open(QIODevice::ReadWrite);
        if(!toFilefd)//创建同名文件失败
        {
#ifdef DEBUG
            qDebug()<<"创建文件失败";
#endif
            emit CreateSysFileErrorSignal();
        }else {//创建文件成功
#ifdef DEBUG
            qDebug()<<"创建文件成功.";
#endif
        }
    }

    QDataStream out(&Tofile);
    QDataStream in(&FromFile);

    while (!in.atEnd()) {
        qint64 readSize =0;
        readSize = in.readRawData(byteTemp,4096);
#ifdef DEBUG
        qDebug()<<"readSize:"<<readSize;
#endif
        out.writeRawData(byteTemp,readSize);
        msleep(10);//延迟
        tempSize+=readSize;
#ifdef DEBUG
        qDebug()<<"tempSize"<<tempSize;
#endif
        if(tempSize == fileSize)
        {
            Tofile.setPermissions(QFile::ExeUser);
            Tofile.close();
#ifdef DESKTOP
            DESKTOP_CHMOD;
            //            system("chmod 777 /root/Desktop/WORKSPACE/Ameda");//给予文件权限
#else
            iMx6_CHMOD;
            //            system("chmod 777 /root/AMEDA/Ameda");
#endif
            FromFile.close();
        }
        emit UpdateFileStatusSignal(tempSize);

    }
}
