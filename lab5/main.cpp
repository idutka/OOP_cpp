#include <QtCore/QCoreApplication>
#include <QDebug>
#include "myset.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MySet s1("Hello");
    MySet s2("World");
    MySet s3;
    s1.show();
    s2.show();
    s3 = s1 - 'l';
    s3.show();
    s1 = s1 + s2;
    s1.show();
    if(s2 > 'r') s2.show();
    if(s1 != s2) qDebug()<<"TRUE";
    return a.exec();
}
