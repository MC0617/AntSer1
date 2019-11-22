#ifndef ANT_DEBUG_MSG_H
#define ANT_DEBUG_MSG_H

#include <QObject>

class ant_debug_msg
{
public:
    ant_debug_msg();
    void antAnalysisMsg(QByteArray aBuff);
private:
    uint8_t antAnalysisAllMsg(QByteArray aBuff);


};

#endif // ANT_DEBUG_MSG_H
