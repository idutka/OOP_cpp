#include <iostream>
#include "Employee.h"
#include "Administration.h"
#include "Personnel.h"
#include "Engineer.h"
using namespace std;

int main(){

	Employee *a;

	Administration p1("Vasya",30,10);
	a=&p1;
	a->showList();

	Personnel p2("Vanya",24,5,3);
	a=&p2;
	a->showList();

	Engineer p3("Dima",35,10,5,1);
	a=&p3;
	a->showList();

}
