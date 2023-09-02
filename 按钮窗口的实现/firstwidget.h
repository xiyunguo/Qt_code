#ifndef FIRSTWIDGET_H
#define FIRSTWIDGET_H
#include "secondwidget.h"
#include <QWidget>

class firstwidget : public QWidget
{
    Q_OBJECT

public:
    secondwidget w;

    firstwidget(QWidget *parent = nullptr);
    void showwidget();
    void closewidget();
    ~firstwidget();
};
#endif // FIRSTWIDGET_H
