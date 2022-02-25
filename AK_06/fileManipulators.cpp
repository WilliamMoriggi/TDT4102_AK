#include "fileManipulators.h"


void writeWordsToFile(string fileName){
    ofstream File(fileName);
    string input;

    while (true){
        string hold;
        cin >> hold;
        if (hold == "quit") break;
        input += (hold + '\n'); 
    }

    File << input;
    File.close();
}


void readFromFileAndPrintToFileWithLineNumbers(string read_fileName, string write_fileName){
    string holdLine;
    vector<string> hold = {};

    ifstream ReadFile(read_fileName);
    while (getline (ReadFile, holdLine))
        hold.push_back(holdLine);
    ReadFile.close();

    ofstream WriteFile(write_fileName);
    string printer  = "";
    for(int i = 0; i < (int)hold.size();i++){
        printer += (to_string(i) + " " + hold.at(i) + '\n');
    }
    WriteFile << printer;
    WriteFile.close();
}

void countLettersInFile(string fileName){
    string theFile = "";
    string hold;
    map<string, int> counter;

    ifstream ReadFile(fileName);
    while (getline (ReadFile, hold)) theFile += hold;

    for(int i = 0; i<(int)theFile.size();i++){
        string n = to_string((theFile.at(i)));
        if (!counter.count(n)) {counter.insert({n,1});}
        else counter.at(n)++;
    }
    for(const auto& m:counter) cout << "Letter: " << m.first<< " Amount: " << m.second << endl;

}