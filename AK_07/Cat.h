#pragma once
#include "std_lib_facilities.h"
#include "Animal.h"

class Cat:public Animal{
public:
    Cat(string name, int age);
    string toString();
};

