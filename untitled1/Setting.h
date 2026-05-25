#ifndef SETTING_H
#define SETTING_H

#include <QWidget>
#include <QGroupBox>
#include <QTabWidget>
#include <QStackedWidget>
#include <QScrollArea>

class Setting: public QWidget
{
    Q_OBJECT
public:
    explicit Setting(QWidget *parent = nullptr);

private:
    QTabWidget *tab;
    QStackedWidget *stack;
};

#endif // SETTING_H
