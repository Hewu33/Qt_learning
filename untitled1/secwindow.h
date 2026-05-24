#ifndef SECWINDOW_H
#define SECWINDOW_H

#include <QWidget>
#include <QLabel>

class SecWindow : public QWidget
{
    Q_OBJECT

public slots: // 自定义槽函数
    void onMessageReceivedB(const QString &msg);

public:
    explicit SecWindow(QWidget *parent = nullptr);

private:
    QLabel *MyLabel;
};

#endif // SECWINDOW_H
