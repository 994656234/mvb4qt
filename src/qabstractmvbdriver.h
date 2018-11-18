#ifndef QABSTRACTMVBDRIVER_H
#define QABSTRACTMVBDRIVER_H

#include "mvb4qt.h"
#include "qmvbport.h"

class QAbstractMvbDriver
{
public:
    QAbstractMvbDriver() {}
    virtual ~QAbstractMvbDriver {};
    virtual bool start() = 0;
    virtual bool stop() = 0;
    virtual bool configure() = 0;
    virtual bool init(qint16 deviceId, enum MvbPhyMode phyMode, enum MvbBufferSize bufferSize) = 0;
    virtual bool addPort(const QMvbPort &port) = 0;
    virtual bool removePort(const QMvbPort &port) = 0;
    virtual bool updatePort(QMvbPort &port) = 0;
    virtual QString getVersion() const;
};

#endif // QABSTRACTMVBDRIVER_H
