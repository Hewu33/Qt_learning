#ifndef INFORMATION_H
#define INFORMATION_H

#include <QWidget>
#include <QLabel>
#include <QSpinBox>
#include <QDoubleSpinBox>
#include <QSlider>
#include <QComboBox>

class Information: public QWidget
{
    Q_OBJECT
public:
    explicit Information(QWidget *parent = nullptr);

private slots:
    void onSliderChanged();
private:
    QSpinBox *age;
    QDoubleSpinBox *high;
    QComboBox *Edu;
    QSlider *score;
    QLabel *Score;
};

#endif // INFORMATION_H
