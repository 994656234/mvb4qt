#ifndef QABSTRACTMVBPROTOCOL_H
#define QABSTRACTMVBPROTOCOL_H

#include "mvb4qt.h"

class QAbstractMvbProtocol
{
public:
    QAbstractMvbProtocol();
    virtual bool getBool(const QMvbPort &port, const quint8 byte, const quint8 bit) const = 0;
    virtual void setBool(const QMvbPort &port, const quint8 byte, quint8 bit, const bool value) const = 0;
    virtual qint8 getQint8(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQint8(const QMvbPort &port, const quint8 byteAddress, const qint8 value) = 0;
    virtual qint16 getQint16(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQint16(const QMvbPort &port, const quint8 byteAddress, const qint16 value) = 0;
    virtual qint32 getQint32(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQint32(const QMvbPort &port, const quint8 byteAddress, const qint32 value) = 0;
    virtual quint8 getQuint8(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQuint8(const QMvbPort &port, const quint8 byteAddress, const quint8 value) = 0;
    virtual quint16 getQuint16(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQuint16(const QMvbPort &port, const quint8 byteAddress, const quint16 value) = 0;
    virtual quint32 getQuint32(const QMvbPort &port, const quint8 byteAddress) const = 0;
    virtual void setQuint32(const QMvbPort &port, const quint8 byteAddress, const quint32 value) = 0;
}

#endif // QABSTRACTMVBPROTOCOL_H
