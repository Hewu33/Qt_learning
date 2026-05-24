#include "Secwindow.h"

SecWindow::SecWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("窗口B");
    MyLabel = new QLabel("等待消息...", this);
    MyLabel->setGeometry(100, 100, 300, 100);
}

void SecWindow::onMessageReceivedB(const QString &msg)
{
    MyLabel->setText("A 说: " + msg);
}