#ifndef QNORMALPROTOCOL_H
#define QNORMALPROTOCOL_H

#include "qabstractmvbprotocol.h"

class QNormalMvbProtocol : QAbstractMvbProtocol
{
public:
    QNormalMvbProtocol();
    virtual bool getBool(const quint8 *data, const quint8 byte, const quint8 bit) const;
    virtual void setBool(quint8 *data, const quint8 byte, quint8 bit, const bool value) const;
    virtual qint8 getQint8(const quint8 *data, const quint8 byte) const;
    virtual void setQint8(quint8 *data,, const quint8 byte, const qint8 value);
    virtual qint16 getQint16(const quint8 *data, const quint8 byte) const;
    virtual void setQint16(quint8 *data, const quint8 byte, const qint16 value);
    virtual qint32 getQint32(const quint8 *data, const quint8 byte) const;
    virtual void setQint32(quint8 *data, const quint8 byte, const qint32 value);
    virtual quint8 getQuint8(const quint8 *data, const quint8 byte) const;
    virtual void setQuint8(quint8 *data, const quint8 byte, const quint8 value);
    virtual quint16 getQuint16(const quint8 *data, const quint8 byte) const;
    virtual void setQuint16(quint8 *data, const quint8 byte, const quint16 value);
    virtual quint32 getQuint32(const quint8 *data, const quint8 byte) const;
    virtual void setQuint32(quint8 *data, const quint8 byte, const quint32 value);
};

#endif // QNORMALPROTOCOL_H
