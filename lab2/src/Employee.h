/*
 * Employee.h
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

using namespace std;

class Employee {
protected:
	char name[20];
	int age;
	int experience;
public:
	Employee();
	virtual ~Employee();
	virtual void showList()=0;
};


#endif /* EMPLOYEE_H_ */
