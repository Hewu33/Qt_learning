#include "loading.h"
#include <QVBoxLayout>

Loading::Loading(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("登录界面");
    zhanghao = new QLineEdit(this);
    mima = new QLineEdit(this);
    zhanghao->setPlaceholderText("请输入账号，长度不超过18位");
    zhanghao->setInputMask(QString("A"));
    zhanghao->setMaxLength(18);
    mima->setPlaceholderText("请输入密码");
    mima->setEchoMode(QLineEdit::EchoMode::Password);
    number = new QLineEdit(this);
    number->setInputMask("nnn-nnnn-nnnn");
    beizhu = new QTextEdit(this);
    QVBoxLayout *Vboxlayout = new QVBoxLayout(this);
    loadingBtn = new QPushButton("登录", this);
    Vboxlayout->addWidget(zhanghao);
    Vboxlayout->addWidget(mima);
    Vboxlayout->addWidget(number);
    Vboxlayout->addWidget(beizhu);
    Vboxlayout->addWidget(loadingBtn);
}