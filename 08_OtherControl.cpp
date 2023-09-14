#include "widget.h"
#include "ui_widget.h"
#include "QMovie"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    //栈控件使用
    ui->stackedWidget->setCurrentIndex(1);
    //scrollArea按钮
    connect(ui->scorllarea,&QPushButton::clicked,[=](){
       ui->stackedWidget->setCurrentIndex(0);
    });
    //toolbox按钮
    connect(ui->toolbox,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(2);
    });
    //tablewidget按钮
    connect(ui->tablewidget,&QPushButton::clicked,[=](){
        ui->stackedWidget->setCurrentIndex(1);
    });

    //下拉框
    ui->comboBox->addItem("奔驰");
    ui->comboBox->addItem("宝马");
    ui->comboBox->addItem("拖拉机");

    //点击按钮 选中拖拉机选项
    connect(ui->tuolaji,&QPushButton::clicked,[=](){
        //ui->comboBox->setCurrentIndex(2);
        ui->comboBox->setCurrentText("拖拉机");
    });


    //利用Qlabel显示图片
    ui->lbl_Image->setPixmap(QPixmap(":/Image/butterfly.png"));
    //利用Qlabel显示动图
    QMovie * movie = new QMovie(":/Image/mario.gif");
    ui->lbl_movie->setMovie(movie);
    //播放动图
    movie->start();

}

Widget::~Widget()
{
    delete ui;
}

