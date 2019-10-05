#include "mywidget.h"
#include <QPushButton>

//需求：  下课后，老师会触发一个信号，饿了，学生会响应这个信号，请客吃饭
//Teacher类 老师类
//Student类  学生类
myWidget::myWidget(QWidget *parent)
    : QWidget(parent)
{
    //创建老师对象以及学生对象
    this->ydl=new teacher(this);
    this->yjr=new student(this);
    connect(ydl,&teacher::hungry,yjr,&student::treat);
    class_over();

}

myWidget::~myWidget()
{

}

void myWidget::class_over()
{
    emit ydl->hungry();
}
