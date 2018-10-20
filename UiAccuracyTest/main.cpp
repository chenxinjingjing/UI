#include "AccuracyTestDialog.h"
#include <QApplication>

#include <QDebug>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    AccuracyTestDialog w;
    w.show();

    return a.exec();
}
