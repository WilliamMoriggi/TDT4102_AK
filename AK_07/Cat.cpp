#include "Cat.h"
#include "std_lib_facilities.h"

Cat::Cat(string name, int age){
    Animal{name, age};
}

string Cat::toString(){
        return "Cat: " + name + ", " + to_string(age);
}