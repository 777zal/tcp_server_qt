// #include "mainwindow.h"
#include "socket_comm.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // w.show();

    socket_comm server;
    return a.exec();
}
