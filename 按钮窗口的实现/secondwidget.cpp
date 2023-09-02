#include "secondwidget.h"

secondwidget::secondwidget(QWidget *parent) : QWidget(parent)
{
    //QPushButton* btn1 = new QPushButton;
    btn1 = new QPushButton;
    btn1->setText("open");
    btn1->setParent(this);


    resize(600,400);
    setWindowTitle("secondwindow");

    connect(btn1,&QPushButton::clicked,this,[=](){
        if(btn1->text()=="open")
        {
            //showwidget();
            w.show();
            btn1->setText("close");
        }
        else
        {
            //closewidget();
            w.close();
            btn1->setText("open");
        }
    });




}

void secondwidget::showwidget()
{
    w.show();
}
void secondwidget::closewidget()
{
    w.close();
}
