#include "qmvbprotocol.h"

QMvbProtocol::QMvbProtocol()
{

}

bool QMvbProtocol::getBool(const quint8 *data, const quint8 byte, const quint8 bit) const
{
    if (data != null && byte < 32 && bit < 8)
    {
        return *(data + byte) & (0x01 << bit) !=0 ? true : false;
    }
    else
    {
        return false;
    }
}

void QMvbProtocol::setBool(quint8 *data, const quint8 byte, quint8 bit, const bool value) const
{
    if (data != null && byte < 32 && bit < 8)
    {
        *(data + byte) |= (0x01 << bit);
    }
}

qint8 QMvbProtocol::getQint8(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof qint8)
    {
        return *(qint8 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQint8(quint8 *data, const quint8 byte, const qint8 value)
{
    if (data != null && byte <= 32 - sizeof qint8)
    {
        *(qint8 *)(data + byte) = value;
    }
}

qint16 QMvbProtocol::getQint16(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof qint16)
    {
        return *(qint16 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQint16(quint8 *data, const quint8 byte, const qint16 value)
{
    if (data != null && byte <= 32 - sizeof qint16)
    {
        *(qint16 *)(data + byte) = value;
    }
}

qint32 QMvbProtocol::getQint32(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof qint32)
    {
        return *(qint32 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQint32(quint8 *data, const quint8 byte, const qint32 value)
{
    if (data != null && byte <= 32 - sizeof qint32)
    {
        *(qint32 *)(data + byte) = value;
    }
}

quint8 QMvbProtocol::getQuint8(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof quint8)
    {
        return *(quint8 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQuint8(quint8 *data, const quint8 byte, const quint8 value)
{
    if (data != null && byte <= 32 - quint8)
    {
        *(quint8 *)(data + byte) = value;
    }
}

quint16 QMvbProtocol::getQuint16(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof quint16)
    {
        return *(quint16 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQuint16(quint8 *data, const quint8 byte, const quint16 value)
{
    if (data != null && byte <= 32 - sizeof quint16)
    {
        *(quint16 *)(data + byte) = value;
    }
}

quint32 QMvbProtocol::getQuint32(const quint8 *data, const quint8 byte) const
{
    if (data != null && byte <= 32 - sizeof quint32)
    {
        return *(quint32 *)(data + byte);
    }
    else
    {
        return 0;
    }
}

void QMvbProtocol::setQuint32(quint8 *data, const quint8 byte, const quint32 value)
{
    if (data != null && byte <= 32 - sizeof quint32)
    {
        *(quint32 *)(data + byte) = value;
    }
}
