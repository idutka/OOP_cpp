/*
 * Administration.h
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#ifndef ADMINISTRATION_H_
#define ADMINISTRATION_H_
#include "Employee.h";
#include <iostream>
using namespace std;

class Administration:public Employee {
public:
	Administration();
	Administration(char*,int,int);
	Administration(const Administration&);
	virtual ~Administration();
	void showList(){
		cout << "Імя: " << name << endl;
		cout << "Вік: " << age << endl;
		cout << "Стаж: " << experience << endl;
	}
};

#endif /* ADMINISTRATION_H_ */
