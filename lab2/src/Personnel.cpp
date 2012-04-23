/*
 * Personnel.cpp
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#include "Personnel.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

Personnel::Personnel() {
	cout << "Виклик конструкатора без параметрів для: " << this << endl;
}

Personnel::Personnel(char *n,int a,int e,int p){
	strcpy (name,n);
	age = a;
	experience = e;
	pnumber = p;
	cout << "Виклик конструкатора з параметрів для: " << name << endl;
}
Personnel::Personnel(const Personnel&){
	cout << "Виклик конструкатора копіювання для: " << name << endl;
}

Personnel::~Personnel() {
	cout << "Виклик деструкатора для: " << this << endl;
}

