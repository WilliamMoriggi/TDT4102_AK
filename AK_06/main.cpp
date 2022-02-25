#include "std_lib_facilities.h"
#include "fileManipulators.h"

void writeWordsToFile(string fileName);
void readFromFileAndPrintToFileWithLineNumbers(string read_fileName, string write_fileName);



const map<string, string> capitalsMap {
{"Norway", "Oslo"},
{"Sweden", "Stockholm"},
{"Denmark", "Copenhagen"}
};
string getCapital(const string& country) {
return capitalsMap.at(country);
}


int main()
{
	//writeWordsToFile("Test.txt");
    //readFromFileAndPrintToFileWithLineNumbers("Test.txt", "Test2.txt");
    //countLettersInFile("Test2.txt");




    cout << "Capitals:\n";
    for (auto& elem : capitalsMap) {
        cout << getCapital(elem.first) << endl;
    }

}