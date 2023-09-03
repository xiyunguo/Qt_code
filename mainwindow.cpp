#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //ui->actionnew->setIcon(QIcon("D:/文件all/桌面壁纸/A93EBBE998D8BC20032DBD7255D9CC56.jpg"));
    //使用Qt添加资源  ":+前缀名+文件名"
   ui->actionnew->setIcon(QIcon(":/bizhi/01.jpg"));
   ui->actionopen->setIcon(QIcon(":/bizhi/02.jpg"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

