#include "qmvbcard.h"

QMvbCard::QMvbCard(QAbstractMvbDriver *driver)
{
    this->driver = driver;
}

QMvbCard::~QMvbCard(QAbstractMvbDriver *driver)
{
    foreach (quint16 number, this->ports.keys())
    {
        delete this->ports[number];
        this->ports.remove(number);
    }
}

bool QMvbCard::addSourcePort(const qint16 number, const quint16 cycle, const QString group = null)
{
    return this->addPort(number, Mvb4Qt::MvbSourcePort, cycle, group);
}

bool QMvbCard::addSinkPort(const qint16 number, const quint16 cycle, const QString group = null)
{
    return this->addPort(number, Mvb4Qt::MvbSourcePort, cycle, group);
}

bool QMvbCard::addVirtualPort(const qint16 number, const quint16 cycle, const QString group = null)
{
    return this->addPort(number, Mvb4Qt::MvbSourcePort, cycle, group);
}

bool QMvbCard::removePort(const qint16 number)
{
    if (this->ports.contains(number))
    {
        delete this->ports[number];
        this->ports.remove(number);

        return true;
    }
    else
    {
        return false;
    }
}

bool QMvbCard::addPort(const qint16 number, const enum MvbPortType type, const quint16 cycle, QString group)
{
    if (this->ports.contains(number))
    {
        return false;
    }
    else
    {
        QMvbPort *port = new QMvbPort();

        port->number = number;
        port->setType(type);
        port->setCycle(cycle);
        port->setGroup(group);
        port->clear();

        this->ports.insert(number, port);

        return true;
    }
}

quint16 QMvbCard::getDeviceId() const
{
    return this->deviceId;
}

enum MvbPhyMode QMvbCard::getPhyMode() const
{
    return this->phyMode;
}

enum MvbBufferSize QMvbCard::getBufferSize() const
{
    return this->bufferSize;
}

enum MvbCardState QMvbCard::getState() const
{
    return this->state;
}

void QMvbCard::setDeviceId(quint16 deviceId)
{
    this->deviceId = deviceId;
}

void QMvbCard::setPhyMode(const enum MvbPhyMode phyMode)
{
    this->phyMode = phyMode;
}

void QMvbCard::getBufferSize(const enum MvbBufferSize bufferSize)
{
    this->bufferSize = bufferSize;
}

void QMvbCard::getState(const enum MvbCardState state)
{
    this->state = state;
}
