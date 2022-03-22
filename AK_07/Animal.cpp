#include "Animal.h"
#include "std_lib_facilities.h"


Animal::Animal(string n, int a){
    name = n;
    age = a;
}


string Animal::toString(){ // hvorfor faen skal denne være virtual hvis jeg uansett redefinerer den i cat/dog helvete faen
    return "Animal: " + name + ", " + to_string(age); 
}