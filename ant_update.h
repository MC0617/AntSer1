#ifndef ANT_UPDATE_H
#define ANT_UPDATE_H

#include <QObject>
#include <QFile>

class ant_update : public QObject
{
    Q_OBJECT
public:
    explicit ant_update(QObject *parent = nullptr);

    QString fileName;

    uint8_t getFileName(QString *str);
    uint8_t readFile(QByteArray * FileBuff, QString sFileName);
    uint8_t getFile(QByteArray * FileBuff);
private:
    uint8_t trHex2Bin(QByteArray * BinBuff, QFile HexFile);

signals:

public slots:
};

#endif // ANT_UPDATE_H
