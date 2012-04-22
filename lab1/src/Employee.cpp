#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee():name(),pnumber(0),level(0){
	cout << "Виклик конструкатора без параметрів для: " << this << endl;
}
Employee::Employee(char *n,int p,int l):name(n),pnumber(p),level(l){
	cout << "Виклик конструкатора з параметрів для: " << name << endl;
}
Employee::Employee(const Employee&){
	cout << "Виклик конструкатора копіювання для: " << name << endl;
}
Employee::~Employee() {
	cout << "Виклик деструкатора для: " << this << endl;
}


char* Employee::getName(){
	return name;
};
int Employee::getPnumber(){
	return pnumber;
};
int Employee::getLevel(){
	return level;
};
void Employee::setName(char* n){
	name = n;
};
void Employee::setPnumber(int p){
	pnumber = p;
};
void Employee::setLevel(int l){
	level = l;
};
void Employee::setEmployee(char* n,int p,int l){
	name = n;
	pnumber = p;
	level = l;
};
