#include "firwindow.h"

FirWindow::FirWindow(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("窗口A");
    sendBtn = new QPushButton("发送", this);
    sendBtn->setGeometry(100, 200, 200, 50);
    myText = new QLineEdit(this);
    myText->setGeometry(100, 100, 300, 50);
    connect(sendBtn, &QPushButton::clicked, this, [this](){
        emit MessageSendA(myText->text());
    });
}