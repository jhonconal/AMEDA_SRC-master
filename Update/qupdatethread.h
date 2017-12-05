#ifndef QUPDATETHREAD_H
#define QUPDATETHREAD_H

#include <QObject>
#include <QFile>
#include <QDebug>
#include <QThread>
#include <QDataStream>
#include <QtGlobal>
#include"dirent.h"

//定义主机与开发板宏
#define DESKTOP_SYSTEM  (system("/root/Desktop/WORKSPACE/Ameda"))
#define iMX6_SYSTEM           (system("/root/AMEDA/Ameda -qws"))
#define DESKTOP_CHMOD   (system("chmod 777 /root/Desktop/WORKSPACE/Ameda"))
#define iMx6_CHMOD            (system("chmod 777 /root/AMEDA/Ameda"))
#define DESKTOP_RM            (system("rm -rf  /root/WORKSPACE/Ameda"))
#define iMx6_RM                     (system("rm -rf  /root/AMEDA/Ameda"))

//#define DESKTOP//桌面测试环境
#define iMX6   //开启imx6主板环境
class QUpdateThread : public QThread
{
    Q_OBJECT
public:
    QUpdateThread(QObject *parent = 0);

signals:
    void OpenUDiskFileErrorSignal();
    void CreateSysFileErrorSignal();
    void UpdateFileStatusSignal(qint64 tempSize);
    void setProgressRangeSignal(qint64 max);
protected:
    void run();

private:
    char * byteTemp;
    qint64 tempSize,fileSize;
    QString fromFileName,toFileName; //U文件.系统下／AMEDA／  同文件名字
    int fromFilefd,toFilefd;                     //打开Ｕ盘，系统下同文件名字的文件描述符
    QFile FromFile,Tofile;

};

#endif // QUPDATETHREAD_H
