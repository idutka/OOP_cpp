/*
 * Personnel.h
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#ifndef PERSONNEL_H_
#define PERSONNEL_H_
#include "Employee.h"
#include <iostream>
using namespace std;

class Personnel:public Employee {
protected:
	int pnumber;
public:
	Personnel();
	Personnel(char*,int,int,int);
	Personnel(const Personnel&);
	virtual ~Personnel();

	void showList(){
		cout << "Імя: " << name << endl;
		cout << "Вік: " << age << endl;
		cout << "Стаж: " << experience << endl;
		cout << "Номер цеха: " << pnumber << endl;
	}
};

#endif /* PERSONNEL_H_ */
