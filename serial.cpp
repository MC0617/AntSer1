#include "serial.h"
#include <QByteArray>
#include <QDebug>



serial::serial(QObject *parent) : QObject(parent)
{

}

void serial::serRead()
{
    QByteArray qa = port.readAll();
}


void serial::initSerPort()
{
    connect(&port, SIGNAL(readyRead()), this, SLOT(serRead()));

}

QList<QString> serial::getPortList()
{
    int iCnt = 0;
    QList<QString> *r = nullptr;
    QList<QSerialPortInfo> infos = QSerialPortInfo::availablePorts();
    if(infos.isEmpty())
    {
        qDebug() << "无串口" << endl;
        return *r;
    }

    iCnt = 0;
    foreach (QSerialPortInfo info, infos) {
        r->insert(iCnt, info.portName());
        qDebug() << info.portName() << endl;
        iCnt++;
    }
    return *r;

}

