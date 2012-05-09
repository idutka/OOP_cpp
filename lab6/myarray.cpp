#include <QtCore/QCoreApplication>
#include<QDebug>

template<class T = int> class MyArray
{
    T *data;
    int size;
public:
    MyArray(int);
    ~MyArray();
    T &operator [](int);
    bool operator ==(T);
    bool operator !=(T);
    int getSize();
    void show();
};


template <class T> MyArray<T>::MyArray(int s=256)
{
    data = new T[s];
    size = s;
}

template <class T> MyArray<T>::~MyArray()
{
    delete [] data;
}

template <class T> T &MyArray<T>::operator [](int i)
{
    if(i<0 || i>size-1)
    {
        qDebug() << "No item number: " << i << endl;
        exit(1);
    }
    return data[i];
}

template <class T> bool MyArray<T>::operator ==(T t)
{
    if(this == t)   return true;
    else return false;
}

template <class T> bool MyArray<T>::operator !=(T t)
{
    if(this != t)   return true;
    else return false;
}

template <class T> int MyArray<T>::getSize()
{
    return size;
}

template <class T> void MyArray<T>::show()
{

    for(int i = 0;i < size; i++)
        qDebug() << data[i];
    qDebug() << "\n";
}

