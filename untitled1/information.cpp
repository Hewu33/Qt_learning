#include "information.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>

Information::Information(QWidget *parent)
    : QWidget(parent)
{
    age = new QSpinBox(this);
    high = new QDoubleSpinBox(this);
    Edu = new QComboBox(this);
    score = new QSlider(this);
    Score = new QLabel("0", this);
    QLabel *defen = new QLabel("得分：", this);
    QHBoxLayout *df = new QHBoxLayout();
    df->addWidget(defen);
    df->addWidget(Score);
    df->addWidget(score);
    Edu->addItem(QString("高中"));
    Edu->addItem(QString("大专"));
    Edu->addItem(QString("本科"));
    Edu->addItem(QString("硕士"));
    Edu->addItem(QString("博士"));
    QHBoxLayout *HBoxLayout = new QHBoxLayout();
    HBoxLayout->addWidget(age);
    HBoxLayout->addWidget(high);
    HBoxLayout->addWidget(Edu);
    QVBoxLayout *all = new QVBoxLayout();
    all->addLayout(HBoxLayout);
    all->addLayout(df);
    setLayout(all);
    connect(score, &QSlider::valueChanged, this, &Information::onSliderChanged);
}

void Information::onSliderChanged()
{
    Score->setText(QString::number(score->value()));
}