#ifndef SECONDWIDGET_H
#define SECONDWIDGET_H

#include <QWidget>
#include "thirdwidget.h"
#include <QPushButton>
class secondwidget : public QWidget
{
    Q_OBJECT
public:
    explicit secondwidget(QWidget *parent = nullptr);
    QPushButton* btn1;
    thirdwidget w;

    void showwidget();
    void closewidget();


signals:

};

#endif // SECONDWIDGET_H
