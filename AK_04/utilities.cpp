#include "utilities.h"


int incrementByValueNumTimes(int startValue, int increment, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
    return startValue;
}

void incrementByValueNumTimesRef(int& startValue, int increment, int numTimes) {
    for (int i = 0; i < numTimes; i++) {
        startValue += increment;
    }
}

void swapNumbers(int& a, int& b){
    int c = a;
    a = b;
    b = c;
}

void printStudent(Student a){
    cout << "--" << " Student information " << "--" << '\n'
         << "Name: " << a.name << '\n'
         << "Study Program: " << a.studyProgram << '\n'
         << "Age: " << a.age << '\n'
         << "-------------------------"
         << '\n';
}

bool isInProgram(Student student, string program){
    if (student.studyProgram == program){
        return true;
    }
    else{
        return false;
    }
}
// 97 - 122
string randomizeString(int min, int max, int len){
    string str = "";
    for (int i = 0; i<len; i++){
        char c = randomWithLimits(min,max);
        str += c;
    }
    return str;
}

int randomWithLimits(int limMin, int limMax){
    return  (rand() % (limMax + 1 - limMin) + limMin);
}

string readInputToString(int limMin, int limMax, int len){
    char a = tolower(limMin);
    char b = tolower(limMax);
    string out = "";
    cout << "Pleas imput " << len 
         << " letters between " << a
         << " and " << b
         << '\n';
    while(out.size() < len){
        char in; 
        cin >> in;
        if (tolower(in) >= a && tolower(in) <= b){
            out += in;
        }
        else{
            cout << "That letter is not accepted, try again \n";
        }
    }
    return out;
}

int countChar(string sub, char n){
    int counter = 0;
    for(int i = 0; i<sub.length(); i++){
        if(tolower(sub.at(i)) == tolower(n)) counter++;
    }
    return counter;
}

int checkCharactersAndPosition(string code, string guess){
    int counter = 0;
    for (int i = 0; i < code.length(); i++){
        if (tolower(code.at(i)) == tolower(guess.at(i))){
            counter++;
        }
    }
    return counter;
}

int checkCharacters(string code, string guess){
    int counter = 0;
    vector<char> letter = {'a','b','c','d','e','f'}; 
    vector<int> code_amount = {};
    vector<int> guess_amount = {};

    for (int i = 0; i < letter.size(); i++){
        code_amount.push_back(countChar(code, letter.at(i)));
        guess_amount.push_back(countChar(guess, letter.at(i)));
        for (int j = 0; j < letter.size(); j++){
            int amount = code_amount.at(j) - guess_amount.at(j); // ikke ferdig :/
        }
        int amount = countChar(code, guess.at(i));
        if (amount > 0) counter++;
    }
    return counter;
}