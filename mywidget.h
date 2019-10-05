#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include "teacher.h"
#include "student.h"

class myWidget : public QWidget
{
    Q_OBJECT

public:
    myWidget(QWidget *parent = 0);
    ~myWidget();
private:
    teacher * ydl;
    student * yjr;
    void class_over();
};

#endif // MYWIDGET_H
