#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_
using namespace std;

class Employee {
	char *name;
	int age;
	int whiskers;
public:
	Employee();
	Employee(char*,int,int);
	Employee(const Employee&);
	~Employee();
	char* getName();
	int getAge();
	int getWhiskers();
	void setName(char*);
	void setAge(int);
	void setWhiskers(int);
	void setEmployee(char*,int,int);

};

#endif /* EMPLOYEE_H_ */
