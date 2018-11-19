#ifndef QSIMULATEMVBDRIVER_H
#define QSIMULATEMVBDRIVER_H


#include <QTime>
#include "mvb4qt.h"

class QSimulateMvbDriver : QAbstractMvbDriver
{
public:
    QSimulateMvbDriver();
    virtual bool start(QMvbCard *card) = 0;
    virtual bool stop(QMvbCard *card) = 0;
    virtual bool configure(QMvbPort *card) = 0;
    virtual bool updatePort(QMvbPort *port) = 0;
    virtual QString getVersion() const = 0;

private:
    const static QString version;   // the driver version
};

#endif // QSIMULATEMVBDRIVER_H
