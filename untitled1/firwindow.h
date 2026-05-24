#ifndef FIRWINDOW_H
#define FIRWINDOW_H


#include <QWidget>
#include <QPushButton>
#include <QLineEdit>

class FirWindow : public QWidget
{
    Q_OBJECT
signals:
    void MessageSendA(const QString &msg);

public:
    explicit FirWindow(QWidget *parent = nullptr);

private:
    QPushButton *sendBtn;
    QLineEdit *myText;
};


#endif // FIRWINDOW_H
