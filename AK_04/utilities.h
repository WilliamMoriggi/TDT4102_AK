# include "std_lib_facilities.h"

#ifndef FILE_UTILITIES_SEEN
#define FILE_UTILITIES_SEEN

int incrementByValueNumTimes(int startValue, int increment, int numTimes);
void incrementByValueNumTimesRef(int& startValue, int increment, int numTimes);
void swapNumbers(int& a, int& b);

struct Student{
    string name;
    string studyProgram;
    int age;
};

void printStudent(Student a);
bool isInProgram(Student student, string program);

string randomizeString(int min, int max, int len);
int randomWithLimits(int limMin, int limMax);
string readInputToString(int limMin, int limMax, int len);
int countChar(string sub, char n);

int checkCharactersAndPosition(string code, string guess);
int checkCharacters(string code, string guess);

#endif /* !FILE_UTILITIES_SEEN */