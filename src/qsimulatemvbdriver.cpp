#include "qsimulatemvbdriver.h"

QSimulateMvbDriver::QSimulateMvbDriver()
{

}

const QString QSimulateMvbDriver::version = "1.0.0";

virtual bool QSimulateMvbDriver::start(QMvbCard *card)
{
    this->state = Mvb4Qt::MvbCardStart;

    return true;
}

virtual bool stop(QMvbCard *card)
{
    return true;
}

virtual bool configure(QMvbPort *card)
{
    return true;
}

virtual bool updatePort(QMvbPort *port)
{
    if (port == null)
    {
        return false
    }
    else if (port->type == Mvb4Qt::MvbSourcePort)
    {
        return true;
    }
    else
    {
        quint8 *data = port->getData();

        // update the data of source port
        for (int i = 0; i < port->size; i ++)
        {
            qsrand(QTime::currentTime());
            *(data + i) = qrand() % 256;
        }

        // update the refresh time
        qsrand(QTime::currentTime());
        port->setRefresh(qrand() % port->getCycle());

        return true;
    }
}

virtual QString getVersion() const
{
    return version;
}
