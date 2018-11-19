#ifndef MVB4QT_H
#define MVB4QT_H


#include <QtGlobal>
#include <QObject>
#include <QThread>
#include "qmvbcard.h"
#include "qabstractmvbdriver.h"
#include "qmvbport.h"

namespace Mvb4Qt
{
    enum MvbPortType
    {
        MvbSinkPort,
        MvbSourcePort,
        MvbVirtualPort
    };

    enum MvbPhyMode
    {
        MvbOfgMode,
        MvbEmdMode,
        MvbEmsMode
    };

    enum MvbBufferSize
    {
        MinMvbBuffer,
        MidMvbBuffer,
        MaxMvbBuffer
    };

    enum MvbCardState
    {
        MvbCardStart,
        MvbCardStop,
        MvbCardConfigure
    };
}

#endif // MVB4QT_H
