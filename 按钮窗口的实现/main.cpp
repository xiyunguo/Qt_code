#include "firstwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    firstwidget w;
    w.show();
    return a.exec();
}
