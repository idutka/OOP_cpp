/*
 * Administration.cpp
 *
 *  Created on: 27 бер. 2012
 *      Author: vanok
 */

#include "Administration.h"
#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std ;

Administration::Administration() {
	cout << "Виклик конструкатора без параметрів для: " << this << endl;
}

Administration::Administration(char *n,int a,int e){
	strcpy (name,n);
	age = a;
	experience = e;
	cout << "Виклик конструкатора з параметрів для: " << name << endl;
}
Administration::Administration(const Administration&){
	cout << "Виклик конструкатора копіювання для: " << name << endl;
}
Administration::~Administration() {
	cout << "Виклик деструкатора для: " << this << endl;
}

