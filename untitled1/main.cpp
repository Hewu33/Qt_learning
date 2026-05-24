#include "mainwindow.h"
#include "firwindow.h"
#include "secwindow.h"
#include "loading.h"
#include "information.h"
#include "Todo.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // MainWindow w;
    // FirWindow wA;
    // SecWindow wB;

    // QObject::connect(&wA, &FirWindow::MessageSendA, &wB, &SecWindow::onMessageReceivedB);

    // wA.show();
    // wB.show();

    // Loading w;
    // Information w;
    Todo w;
    w.show();

    return QApplication::exec();
}
