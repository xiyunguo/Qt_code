#include "firstwidget.h"
#include <QPushButton>

firstwidget::firstwidget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton* btn1 = new QPushButton;
    btn1->setText("open");
    btn1->setParent(this);

    QPushButton* btn2 = new QPushButton;
    btn2->move(200,0);
    btn2->setText("close");
    btn2->setParent(this);

    resize(600,400);
    setWindowTitle("firstwindow");



    connect(btn1,&QPushButton::clicked,this,&firstwidget::showwidget);
    connect(btn2,&QPushButton::clicked,this,&firstwidget::closewidget);
}

void firstwidget::showwidget()
{
    w.show();
}
void firstwidget::closewidget()
{
    w.close();
    w.w.close();
    if(w.btn1->text()=="close")
    {
        w.btn1->setText("open");
    }
}

firstwidget::~firstwidget()
{
}

