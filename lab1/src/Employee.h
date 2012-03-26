#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using namespace std;

class Employee {
	char *name;
	int pnumber;
	int level;
public:
	Employee();
	Employee(char*,int,int);
	Employee(const Employee&);
	~Employee();
	char* getName();
	int getPnumber();
	int getLevel();
	void setName(char*);
	void setPnumber(int);
	void setLevel(int);
	void setEmployee(char*,int,int);

};

#endif /* EMPLOYEE_H_ */
