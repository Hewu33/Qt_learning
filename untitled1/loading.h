#ifndef LOADING_H
#define LOADING_H


#include <QWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QTextEdit>

class Loading : public QWidget
{
    Q_OBJECT

public:
    explicit Loading(QWidget *parent = nullptr);

private:
    QLineEdit *zhanghao;
    QLineEdit *mima;
    QLineEdit *number;
    QTextEdit *beizhu;
    QPushButton *loadingBtn;
};

#endif // LOADING_H
