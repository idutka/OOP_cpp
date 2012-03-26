#include <iostream>
#include "Employee.h"
using namespace std;

int main(){

Employee emp,a,b,c;

Employee q("sds",23,3);
emp.setEmployee("qwe",21,3);

a=q;
cout << a.getName() << endl;

int (Employee::*omg)();
omg=&Employee::getLevel;

(a.*omg)();
cout << q.getPnumber() << endl;
}
