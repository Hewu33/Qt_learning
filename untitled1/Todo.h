#ifndef TODO_H
#define TODO_H

#include <QWidget>
#include <QLabel>
#include <QProgressBar>
#include <QListWidget>
#include <QPushButton>
#include <QLineEdit>

class Todo: public QWidget
{
    Q_OBJECT

public:
    explicit Todo(QWidget *parent = nullptr);
private slots:
    void addTodo();
    void delTodo();
    void setpro();
private:
    QLabel *todo;
    QProgressBar *pro;
    QListWidget *list;
    QPushButton *add;
    QPushButton *del;
    QLineEdit *willdo;
};

#endif // TODO_H
