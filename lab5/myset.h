#ifndef MYSET_H
#define MYSET_H
#define MAX 256
class MySet
{
private:
    char str[MAX];
    char buf[MAX];
public:
    MySet();
    ~MySet();
    MySet(char *);
    char* getChar();
    void show(void);

    char* operator - (char);
    char* operator + (char *);
    char* operator + (MySet);
    bool operator > (char);
    bool operator == (char *);
    bool operator == (MySet);
    bool operator != (char *);
    bool operator != (MySet);


};

#endif // MYSET_H
