/*
 * Engineer.cpp
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#include "Engineer.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

Engineer::Engineer() {
	cout << "Виклик конструкатора без параметрів для: " << this << endl;
}

Engineer::Engineer(char *n,int a,int e,int p,int l){
	strcpy (name,n);
	age = a;
	experience = e;
	pnumber = p;
	level = l;
	cout << "Виклик конструкатора з параметрів для: " << name << endl;
}
Engineer::Engineer(const Engineer&){
	cout << "Виклик конструкатора копіювання для: " << name << endl;
}

Engineer::~Engineer() {
	cout << "Виклик деструкатора для: " << this << endl;
}

