#ifndef QABSTRACTMVBDRIVER_H
#define QABSTRACTMVBDRIVER_H

#include "mvb4qt.h"
#include "qmvbport.h"
#include "qmvbcard.h"

class QAbstractMvbDriver
{
public:
    virtual bool start(QMvbCard &card) = 0;
    virtual bool stop(QMvbCard &card) = 0;
    virtual bool configure(QMvbPort &card) = 0;
    virtual bool updatePort(QMvbPort &port) = 0;
    virtual QString getVersion() const = 0;
};

#endif // QABSTRACTMVBDRIVER_H
