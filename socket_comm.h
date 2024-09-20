#ifndef SOCKET_COMM_H
#define SOCKET_COMM_H

#include <QObject>
#include <QDebug>
#include <QTcpSocket>
#include <QTcpServer>

class socket_comm : public QObject
{
    Q_OBJECT
public:
    explicit socket_comm(QObject *parent = nullptr);

signals:

public slots:
    void newConnection();

private:
    QTcpServer *server;
};

#endif // SOCKET_COMM_H
