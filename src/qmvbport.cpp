#include "qmvbport.h"

QMvbPort::QMvbPort()
{
    this->clear();
}

qint16 QMvbPort::getNumber() const
{
    return this->number;
}

void QMvbPort::setNumber(const qint16 number)
{
    this->number = number;
}

enum MvbPortType QMvbPort::getType() const
{
    return this->type;
}

void QMvbPort::setType(const enum MvbPortType type)
{
    this->type = type;
}

qint16 QMvbPort::getSize() const
{
    return this->size;
}

void QMvbPort::setSize(const qint16 size)
{
    this->size = size;
}

quint16 QMvbPort::getCycle() const
{
    return this->cycle;
}

void QMvbPort::setCycle(const quint16 cycle)
{
    this->cycle = cycle;
}

quint16 QMvbPort::getRefresh() const
{
    return this->refresh;
}

void QMvbPort::setRefresh(const quint16 refresh)
{
    this->refresh = refresh;
}

quint8* QMvbPort::getData() const
{
    return this->data;
}

void QMvbPort::setData(const quint8 *data)
{
    delete this->data;
    this->data = data;
}

void QMvbPort::clear()
{
    for (qint16 i = 0; i < sizeof(this->data); i ++)
    {
        this->data[i] = 0;
    }
}

QString QMvbPort::getGroup() const
{
    return group;
}

QString QMvbPort::setGroup(QString group)
{
    this->group = group;
}
