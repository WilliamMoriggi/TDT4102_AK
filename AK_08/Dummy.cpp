#include "Dummy.h"
#include <algorithm>
#include <iostream>

Dummy::Dummy(const Dummy& D){
    num = new int{*D.num};
}


Dummy& Dummy::operator=(Dummy d){
    std::swap(num, d.num);
    return *this;
}
