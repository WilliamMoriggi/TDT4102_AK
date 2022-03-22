#include "Dog.h"
#include "std_lib_facilities.h"

Dog::Dog(string name, int age){
    Animal{name,age};
}

string Dog::toString(){
        return "Dog: " + name + ", " + to_string(age);
}