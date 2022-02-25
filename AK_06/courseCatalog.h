#pragma once
#include "std_lib_facilities.h"

class CourseCatalog{
private:
map<string,string> coursecatalog;
void readFromFile();
void writeToFile();

public:
void addCourse(string code, string course);
void removeCourse(string course);
string getCourse(string code);

friend ostream& operator<<(ostream&, const CourseCatalog&);
};
