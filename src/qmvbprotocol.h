#ifndef QMVBPROTOCOL_H
#define QMVBPROTOCOL_H

#include "mvb4qt.h"

class QMvbProtocol
{
public:
    QMvbProtocol();
    virtual bool getBool(const QMvbPort *port, const quint8 byte, const quint8 bit) const;
    virtual void setBool(const QMvbPort *port, const quint8 byte, quint8 bit, const bool value) const;
    virtual qint8 getQint8(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQint8(const QMvbPort *port, const quint8 byteAddress, const qint8 value);
    virtual qint16 getQint16(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQint16(const QMvbPort *port, const quint8 byteAddress, const qint16 value);
    virtual qint32 getQint32(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQint32(const QMvbPort *port, const quint8 byteAddress, const qint32 value);
    virtual quint8 getQuint8(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQuint8(const QMvbPort *port, const quint8 byteAddress, const quint8 value);
    virtual quint16 getQuint16(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQuint16(const QMvbPort *port, const quint8 byteAddress, const quint16 value);
    virtual quint32 getQuint32(const QMvbPort *port, const quint8 byteAddress) const;
    virtual void setQuint32(const QMvbPort *port, const quint8 byteAddress, const quint32 value);
};

#endif // QMVBPROTOCOL_H
