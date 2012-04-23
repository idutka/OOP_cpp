#ifndef MYARRAY_H
#define MYARRAY_H
#include <QtCore/QCoreApplication>
#include<QDebug>

template<class T> class MyArray
{
    T *data;
    int size;
public:
    MyArray(int);
    ~MyArray();
    void show()
    {
        qDebug()<<"lol";
    }
};

#endif // MYARRAY_H
