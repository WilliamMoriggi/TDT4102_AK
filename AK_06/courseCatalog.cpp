#include "courseCatalog.h"


void CourseCatalog::addCourse(string code, string course){
    coursecatalog.insert({code,course});
}
void CourseCatalog::removeCourse(string course){
    coursecatalog.erase(course);
}
string CourseCatalog::getCourse(string code){
    return coursecatalog.at(code);
}

void CourseCatalog::readFromFile(){
    string hold;
    ifstream ReadFile("coursecatalog.txt");

    while (getline (ReadFile, hold)){
        stringstream ss (hold);
        vector<string> a;

        for (int i; ss >> i;){
            a.push_back(to_string(i));
            if(ss.peek() == ',') ss.ignore();
        }
        addCourse(a.at(0),a.at(1));
    }
    ReadFile.close();
}
void CourseCatalog::writeToFile(){
    ofstream File("coursecatalog.txt");
    for(const auto& m:coursecatalog) File << m.first << ',' << m.second << endl;
    File.close();
}