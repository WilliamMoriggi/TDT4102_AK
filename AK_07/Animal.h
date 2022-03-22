#pragma once
#include "std_lib_facilities.h"

class Animal{
protected:
string name;
int age;

public:
Animal(string n, int a);
Animal(){};
virtual ~Animal(){};
virtual string toString();
};
