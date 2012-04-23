#include "myset.h"
#include <QDebug>


MySet::MySet()
{
}

MySet::~MySet()
{
}

MySet::MySet(char* s)
{
    strcpy(str,s);
}

char* MySet::getChar()
{
    return str;
}

void MySet::show()
{
    qDebug() << str;
}

//------------
char* MySet::operator -(char c)
{

    int i, j;
    for (i = 0, j = 0; str[i]; i++)
        if (str[i] != c)
            buf[j++] = str[i];
    buf[j] = NULL;
    return buf;

}

char* MySet::operator +(char* c)
{
    return strcat(str,c);
}

char* MySet::operator +(MySet m)
{
    return  strcat(str,m.getChar());
}

bool MySet::operator >(char c)
{
    for (int i = 0; str[i]; i++)
        if (str[i] == c) return true;
    return false;
}

bool MySet::operator == (char* s)
{
    if(strcmp(s,str)==0) return true;
    else return false;
}

bool MySet::operator == (MySet m)
{
    if(strcmp(m.getChar(),str)==0) return true;
    else return false;
}

bool MySet::operator !=(char* s)
{
    if(strcmp(s,str)!=0) return true;
    else return false;
}

bool MySet::operator !=(MySet m)
{
    if(strcmp(m.getChar(),str)!=0) return true;
    else return false;
}


