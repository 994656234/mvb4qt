#ifndef QMVBCARD_H
#define QMVBCARD_H

#include "mvb4qt.h"
#include <QMap>

class QMvbCard : QThread
{
public:
    QMvbCard(QAbstractMvbDriver *driver);
    bool addSourcePort(const qint16 number, const quint16 cycle, const QString group = null);
    bool addSinkPort(const qint16 number, const quint16 cycle, const QString group = null);
    bool addVirtualPort(const qint16 number, const quint16 cycle, const QString group = null);
    bool removePort(const qint16 number);
    quint16 getDeviceId() const;
    enum MvbPhyMode getPhyMode() const;
    enum MvbBufferSize getBufferSize() const;
    enum MvbCardState getState() const;
    void setDeviceId(const quint16 deviceId);
    void setPhyMode(const enum MvbPhyMode phyMode);
    void getBufferSize(const enum MvbBufferSize bufferSize);
    void getState(const enum MvbCardState state);

private:
    QAbstractMvbDriver *driver;
    QMap<qint16, QMvbPort *> ports; // a map used to store all ports
    quint16 deviceId;   // the id of mvb device
    enum MvbPhyMode phyMode;    // the mode of mvb device
    enum MvbBufferSize bufferSize;  // the buffer size of mvb device
    enum MvbCardState state;    // the state of mvb card

private:
    bool addPort(const qint16 number, const enum MvbPortType, const quint16 cycle, QString group);
};

#endif // QMVBCARD_H
