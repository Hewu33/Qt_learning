#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QLabel>
#include <QSlider>
#include <QRadioButton>
#include <QButtonGroup>
#include <QCheckBox>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QToolButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
signals:// 自定义信号

private slots: // 自定义槽函数
    // void onAddClicked();
    // void onMinClicked();

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private:
    Ui::MainWindow *ui;
    QButtonGroup *btnGroup;
    QRadioButton *male;
    QRadioButton *female;
    QLabel *sex;
    QLabel *hobby;
    QCheckBox *sing;
    QCheckBox *dance;
    QCheckBox *rap;
    QCheckBox *basketball;
    QCheckBox *music;
    QToolButton *toolButton;
    // QPushButton *button;
    // QPushButton *Add;
    // QPushButton *Min;
    // QLabel *MyLabel;
    // int  currentValue;
    // QSlider *mySlider;

};
#endif // MAINWINDOW_H
