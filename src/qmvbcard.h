#ifndef QMVBCARD_H
#define QMVBCARD_H

#include "mvb4qt.h"
#include <QMap>

class QMvbCard : QThread
{
public:
    QMvbCard(QAbstractMvbDriver *driver);
    QMap<qint16, QMvbPort> ports;
    void addSourcePort(const qint16 number, const quint16 cycle, const QString group);
    void addSinkPort(const qint16 number, const quint16 cycle, const QString group);
    void addVirtualPort(const qint16 number, const quint16 cycle, const QString group);
    void removePort(const qint16 number);

public:
    quint16 deviceId;   // the id of mvb device
    enum MvbPhyMode phyMode;    // the mode of mvb device
    enum MvbBufferSize bufferSize;  // the buffer size of mvb device

private:
    QAbstractMvbDriver *driver;

private:
    void addPort(const qint16 number, const enum MvbPortType, const quint16 cycle, QString group);
};

#endif // QMVBCARD_H
