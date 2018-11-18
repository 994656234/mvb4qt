#include "qmvbcard.h"

QMvbCard::QMvbCard(QAbstractMvbDriver *driver)
{
    this->driver = driver;
}

void QMvbCard::addPort(const qint16 number, const MvbPortType, const quint16 cycle, QString group)
{
    QMvbPort port;
}

void QMvbCard::addSourcePort(const qint16 number, const quint16 cycle, const QString group)
{
    this->ports.insert()
}

void QMvbCard::addSinkPort(const qint16 number, const quint16 cycle, const QString group)
{

}

void QMvbCard::addVirtualPort(const qint16 number, const quint16 cycle, const QString group)
{

}

void QMvbCard::removePort(const qint16 number)
{

}
