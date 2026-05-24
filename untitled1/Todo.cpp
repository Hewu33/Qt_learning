#include "Todo.h"
#include <QVBoxLayout>
#include <QHBoxLayout>


Todo::Todo(QWidget *parent)
    : QWidget(parent)
{
    todo = new QLabel("待做列表", this);
    pro = new QProgressBar(this);
    pro->setRange(0, 10);
    pro->setValue(0);
    pro->setTextVisible(true);
    pro->setFormat("待做 %v / 10");
    list = new QListWidget(this);
    add = new QPushButton("添加待做项", this);
    del = new QPushButton("删除待做项", this);
    willdo = new QLineEdit(this);
    willdo->setPlaceholderText("输入待做事项...");
    QHBoxLayout *HBox1 = new QHBoxLayout();
    HBox1->addWidget(add);
    HBox1->addWidget(del);
    QVBoxLayout *VBox1 = new QVBoxLayout();
    VBox1->addWidget(todo);
    VBox1->addWidget(list);
    VBox1->addLayout(HBox1);
    VBox1->addWidget(willdo);
    VBox1->addWidget(pro);
    setLayout(VBox1);
    connect(add, &QPushButton::clicked, this, &Todo::addTodo);
    connect(del, &QPushButton::clicked, this, &Todo::delTodo);
}

void Todo::addTodo()
{
    if (list->count() >= 10) return;  // 最多 10 条
    list->addItem(willdo->text());
    willdo->clear();  // 清空输入框
    setpro();         // 更新进度条
}

void Todo::delTodo()
{
    delete list->currentItem();
    setpro();  // 更新进度条
    // int row = list->currentRow();

    // 移除指定行的项,但不delete
    // QListWidgetItem *aItem = list->takeItem(row);

    // 释放空间
    // delete aItem;
}

void Todo::setpro()
{
    pro->setValue(list->count());
}