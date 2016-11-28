#include "mainwindow.h"
#include "backwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    //BackWindow b;
    w.show();

    //b.show();
    return a.exec();
}
