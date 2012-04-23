/*
 * Engineer.h
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#ifndef ENGINEER_H_
#define ENGINEER_H_
#include "Personnel.h"
using namespace std;

class Engineer:public Personnel {
protected:
	int level;
public:
	Engineer();
	Engineer(char*,int,int,int,int);
	Engineer(const Engineer&);
	virtual ~Engineer();
	void showList(){
		cout << "Імя: " << name << endl;
		cout << "Вік: " << age << endl;
		cout << "Стаж: " << experience << endl;
		cout << "Номер цеха: " << pnumber << endl;
		cout << "Розряд: " << level << endl;
	}
};

#endif /* ENGINEER_H_ */
