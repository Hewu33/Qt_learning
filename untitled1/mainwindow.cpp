#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    // , currentValue(0)
{
    ui->setupUi(this);

    // ═══════ QSS 皮肤 ═══════
    setStyleSheet(R"(
        /* 全局背景和字体 */
        QMainWindow {
            background-color: #1e1e2e;
        }
        QWidget {
            color: #cdd6f4;
            font-family: "Microsoft YaHei", sans-serif;
        }

        /* 标签 */
        QLabel {
            font-size: 16px;
            font-weight: bold;
            color: #cba6f7;
            padding: 8px 0px 4px 0px;
        }

        /* 单选按钮 & 复选框 */
        QRadioButton, QCheckBox {
            font-size: 14px;
            color: #a6adc8;
            spacing: 8px;
            padding: 4px 0px;
        }
        QRadioButton:hover, QCheckBox:hover {
            color: #cdd6f4;
        }
        QRadioButton::indicator, QCheckBox::indicator {
            width: 18px;
            height: 18px;
            border-radius: 4px;
            border: 2px solid #585b70;
            background-color: #313244;
        }
        QRadioButton::indicator:checked, QCheckBox::indicator:checked {
            background-color: #cba6f7;
            border-color: #cba6f7;
        }
        QRadioButton::indicator {
            border-radius: 10px;
        }
    )");

    // ═══════ 控件创建 ═══════
    // button = new QPushButton("关闭", this);
    // button->setGeometry(800,0,200,50);
    // Add = new QPushButton("+1", this);
    // Add->setGeometry(100,100,200,50);
    // Min = new QPushButton("-1", this);
    // Min->setGeometry(400,100,200,50);
    // MyLabel = new QLabel("0", this);
    // MyLabel->setGeometry(300,0,200,50);
    // mySlider = new QSlider(this);
    // mySlider->setGeometry(300, 200, 200, 50);
    // connect(button, &QPushButton::clicked, this, &MainWindow::close);
    // connect(Add, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    // connect(Min, &QPushButton::clicked, this, &MainWindow::onMinClicked);
    // connect(Add, &QPushButton::clicked, this, [&](){
    //     currentValue++;
    //     MyLabel->setText(QString::number(currentValue));
    // });
    // connect(Min, &QPushButton::clicked, this, [&](){
    //     currentValue--;
    //     MyLabel->setText(QString::number(currentValue));
    // });
    // connect(mySlider, &QSlider::valueChanged, this, [this](int value){
    //     MyLabel->setText(QString::number(value));
    // });
    // button = new QPushButton("1", this);
    // button->setCheckable(true);
    // button->setChecked(true);
    // button->setEnabled(true);
    toolButton = new QToolButton(this);
    toolButton->setGeometry(100, 100, 200, 50);
    sex = new QLabel("请选择性别", this);
    hobby = new QLabel("请选择兴趣爱好", this);
    btnGroup = new QButtonGroup(this);
    male = new QRadioButton("男", this);
    female = new QRadioButton("女", this);
    btnGroup->addButton(male);
    btnGroup->addButton(female);
    sing = new QCheckBox("唱歌", this);
    dance = new QCheckBox("跳舞", this);
    rap = new QCheckBox("rap", this);
    basketball = new QCheckBox("打篮球", this);
    music = new QCheckBox("听音乐", this);
    QVBoxLayout* Vlayout1 = new QVBoxLayout();
    QHBoxLayout* Hlayout2 = new QHBoxLayout();
    QHBoxLayout* Hlayout1 = new QHBoxLayout();
    QVBoxLayout* Vlayout2 = new QVBoxLayout();  // 爱好用垂直布局，避免太宽
    Vlayout1->addWidget(sex);
    Hlayout1->addWidget(male);
    Hlayout1->addWidget(female);
    Vlayout1->addLayout(Hlayout1);
    Vlayout1->addStretch();  // 弹簧：把性别内容推向顶部

    Vlayout2->addWidget(hobby);
    Vlayout2->addWidget(sing);
    Vlayout2->addWidget(dance);
    Vlayout2->addWidget(rap);
    Vlayout2->addWidget(basketball);
    Vlayout2->addWidget(music);
    Vlayout2->addStretch();  // 弹簧：把爱好内容推向顶部

    Hlayout2->addLayout(Vlayout1);
    Hlayout2->addLayout(Vlayout2);

    ui->centralwidget->setLayout(Hlayout2);  // ★ 关键：把布局挂载到窗口
}

MainWindow::~MainWindow()
{
    delete ui;
}

// void MainWindow::onAddClicked()
// {
//     currentValue++;
//     MyLabel->setText(QString::number(currentValue));
// }

// void MainWindow::onMinClicked()
// {
//     currentValue--;
//     MyLabel->setText(QString::number(currentValue));
// }

