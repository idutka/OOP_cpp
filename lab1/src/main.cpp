#include <iostream>
#include "Employee.h"
using namespace std;

int main(){

Employee emp,a,c[3];
emp.setEmployee("nameTwo",10,1);

Employee q("nameOne",5,3);

c[0].setEmployee("name0",19,50);

a=q;
cout << a.getName() << endl;

Employee *p;
p=new Employee[3];
p-> setEmployee("Imya",19,50);
cout << p->getName() << endl;

int (Employee::*omg)();
omg=&Employee::getLevel;
cout << (q.*omg)() << endl;
cout << q.getLevel() << endl;


return 0;
}
