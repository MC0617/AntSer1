#include "ant_update.h"
#include <QDebug>

ant_update::ant_update(QObject *parent) : QObject(parent)
{

}


struct xHexFileStruct{
    uint8_t Header = 0x3A;
    uint8_t DataLength;
    uint16_t DataAddress;
    uint8_t DataType;
    uint8_t Data[0x10];
    uint8_t DataCS;
    uint8_t Data0D = 0x0D;
    uint8_t Data0A = 0x0A;
};

uint8_t ant_update::trHex2Bin(QByteArray *BinBuff, QFile HexFile)
{
    QByteArray buff;
    char *rBuff = nullptr;
    int iCnt = 0;

    while(HexFile.read(rBuff, 24) == 0x3A)
    {
        iCnt++;
    }
    //从一组数据提取bin
    buff = QByteArray::fromHex(buff.mid(1));
    if(buff.at(3) == 0x00)
    {
        buff = buff.mid(4, buff.at(0));
    }
    BinBuff->append(buff);

//    int32_t DataAddress = 0;

//    while(DataAddress != -1)
//    {
//        if(HexBuff.isEmpty())
//        {
//        }
//    }

    return 0;
}
