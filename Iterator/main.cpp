#include "mainwindow.h"

#include <QApplication>
#include "TestList.h"
#include "TestMap.h"

int main(int argc, char *argv[])
{
    TestListIteratorJava();
    TestListIteratorStl();

    TestMapJava();
    TestMapStl();


    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
