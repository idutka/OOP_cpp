#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee():name(),age(0),whiskers(0){
	cout << "Виклик конструкатора без параметрів для: " << this << endl;
}
Employee::Employee(char *n,int a,int w):name(n),age(a),whiskers(w){
	cout << "Виклик конструкатора з параметрів для: " << name << endl;
}
Employee::Employee(const Employee&){
	cout << "Виклик конструкатора копіювання для: " << name << endl;
};
Employee::~Employee() {
	cout << "Виклик деструкатора для: " << this << endl;
}


char* Employee::getName(){
	return name;
};
int Employee::getAge(){
	return age;
};
int Employee::getWhiskers(){
	return whiskers;
};
void Employee::setName(char* n){
	name = n;
};
void Employee::setAge(int a){
	age = a;
};
void Employee::setWhiskers(int w){
	whiskers = w;
};
void Employee::setEmployee(char* n,int a,int w){
	name = n;
	age = a;
	whiskers = w;
};
