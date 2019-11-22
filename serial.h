#ifndef SERIAL_H
#define SERIAL_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class serial : public QObject
{
    Q_OBJECT
public:
    explicit serial(QObject *parent = nullptr);
    QSerialPort port;

public:
    QList<QString> getPortList();
    void initSerPort();
    uint8_t openSerial(QString sPortName, uint32_t u32Baud, uint8_t asd);
signals:

public slots:
    void serRead();
};

#endif // SERIAL_H
