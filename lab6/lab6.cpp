#include <QtCore/QCoreApplication>
#include <QDebug>
#include "myarray.cpp"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyArray<int> a1(3);
    MyArray<int> a2(3);
    for(int i = 0;i < 3;i++) a1[i] = i;
    a2[0] = 2;
    a2[1] = 5;
    a2[2] = 7;
    a1.show();
    a2.show();
    qDebug() << a1[2] << " == " << a2[0];
    if(a1[2] == a2[0])
        qDebug() << "true";
    else qDebug() << "false";

    MyArray<double> d1(2);
    d1[0]=0.123;
    d1[1]=d1[0]+10.1;
    d1.show();

    return a.exec();
}
