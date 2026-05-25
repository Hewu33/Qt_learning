#include "Setting.h"
#include <QPushButton>
#include <QVBoxLayout>
Setting::Setting(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *mainLayout = new QVBoxLayout(this);  // ★ 挂载点

    tab = new QTabWidget(this);
    QStackedWidget *A = new QStackedWidget(this);
    QStackedWidget *B = new QStackedWidget(this);
    QStackedWidget *C = new QStackedWidget(this);
    QScrollArea *a = new QScrollArea(this);
    QScrollArea *b = new QScrollArea(this);
    QScrollArea *c = new QScrollArea(this);
    a->setWidget(A);
    a->setWidgetResizable(true);
    b->setWidget(B);
    b->setWidgetResizable(true);
    c->setWidget(C);
    c->setWidgetResizable(true);
    tab->addTab(a, "general");
    tab->addTab(b, "display");
    tab->addTab(c, "advanced");
    QGroupBox *Aa = new QGroupBox("通用");
    A->addWidget(Aa);
    QGroupBox *Bb = new QGroupBox("显示");
    B->addWidget(Bb);
    QGroupBox *Cc = new QGroupBox("高级");
    C->addWidget(Cc);
    QVBoxLayout *la = new QVBoxLayout(Aa);
    QVBoxLayout *lb = new QVBoxLayout(Bb);
    QVBoxLayout *lc = new QVBoxLayout(Cc);
    la->addWidget(new QPushButton("通用", Aa));
    lb->addWidget(new QPushButton("显示", Bb));
    lc->addWidget(new QPushButton("高级", Cc));

    mainLayout->addWidget(tab);
}
