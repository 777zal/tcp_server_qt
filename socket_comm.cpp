#include "socket_comm.h"

socket_comm::socket_comm(QObject *parent)
    : QObject{parent}
{
    server = new QTcpServer(this);

    connect(server, SIGNAL(newConnection()), this, SLOT(newConnection()));

    if(!server->listen(QHostAddress::Any, 3333))
    {
        qDebug() << "Server could not start!";
    }
    else
    {
        qDebug() << "Server started!";
    }
}

void socket_comm::newConnection()
{
    QTcpSocket *socket = server->nextPendingConnection();

    qDebug() << "Get Peer IP:"+socket->peerAddress().toString();

    socket->write("hello client\r\n");
    socket->flush();

    socket->waitForBytesWritten(3000);
    socket->close();
}
