#ifndef QMVBPORT_H
#define QMVBPORT_H

#include "mvb4qt.h"

class QMvbPort: QObject
{
public:
    QMvbPort();
    ~QMvbPort();
    qint16 getNumber() const;
    void setNumber(const qint16 number);
    enum MvbPortType getType() const;
    void setType(const enum MvbPortType type);
    qint16 getSize() const;
    void setSize(const qint16 size);
    quint16 getCycle() const;
    void setCycle(const quint16 cycle);
    quint16 getRefresh() const;
    void setRefresh(const quint16 refresh);
    quint8 *getData() const;
    void setData(const quint8 data);
    void clear();

private:
    qint16 number; // the port number
    enum MvbPortType type; // the source port or the sink port
    qint16 size;    // the port size
    quint16 cycle;   // the feature cycle
    quint16 refresh; // the refresh time;
    quint8 data[32];    // the data of mvb port
    QString group;  // the group name of mvb port
};

#endif // QMVBPORT_H
