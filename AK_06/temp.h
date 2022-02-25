#pragma once

#include "std_lib_facilities.h"

struct Temps{
    float max;
    float min;
};

istream& operator>>(istream& is, Temps& t);

vector<int> readTemps(string fileName);