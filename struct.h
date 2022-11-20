//
// Created by zhaochenyang on 2022/11/20.
//

#ifndef CLIENT_STRUCT_H
#define CLIENT_STRUCT_H
#include <QString>
struct setConfig{
    QString ip;
    QString datausr;
    QString datapass;
    QString dataname;
    quint16 udpport;
    quint16 tcpport;
};
#endif //CLIENT_STRUCT_H
