#ifndef STUDENT_H
#define STUDENT_H

#include <QObject>

class student : public QObject
{
    Q_OBJECT
public:
    explicit student(QObject *parent = nullptr);

signals:

public slots:
    //早期版本必须写到这里，高级版本可以写在public或者全局函数
    //返回void，需要声明，需要实现
    //可以有参数和重载
    void treat();
};

#endif // STUDENT_H
