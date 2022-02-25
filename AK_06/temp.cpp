#include "temp.h"

istream& operator>>(istream& is, Temps& t){
    cout << "Enter max: ";
    is >> t.max;
    cout << "Enter min: ";
    is >> t.min;
    return is;
}

vector<int> readTemps(string fileName){
    string hold;
    ifstream ReadFile(fileName);
    vector<int> temps;

    while (getline (ReadFile, hold)) temps.push_back((int)hold.at(0));
    ReadFile.close();
    
    return temps;
}