# include "tests.h"
# include "std_lib_facilities.h"



void testCallByValue(){
    int v0 = 5;
    int increment = 2;
    int iterations = 10;
    int result = incrementByValueNumTimes(v0, increment, iterations);
    cout << "v0: " << v0
         << " increment: " << increment
         << " iterations: " << iterations
         << " result: " << result << endl;
}

void testCallByReference(){
    int v0 = 5;
    int v = v0;
    int increment = 2;
    int iterations = 10;
    incrementByValueNumTimesRef(v, increment, iterations);
    cout << "v0: " << v0
         << " increment: " << increment
         << " iterations: " << iterations
         << " result: " << v << endl;
}

void testSwapNumbers(){
    int a = 4;
    int b = 6;
    cout << "Before swap: "
         << "a = " << a 
         << " b = " << b
         << '\n';
    swapNumbers(a,b);
    cout << "After swap: "
         << "a = " << a 
         << " b = " << b
         << '\n';
}

void testString(){
    string grades;
    grades = randomizeString(65,70,8);
    cout << grades << '\n';
    vector<int> gradeCount = {countChar(grades,'A'),
                              countChar(grades,'B'),
                              countChar(grades,'C'),
                              countChar(grades,'D'),
                              countChar(grades,'E'),
                              countChar(grades,'F')};
    float average = 0;
    for(int i = 0; i<6; i++){
        average += gradeCount.at(i)*5.0-i;
    }
    average = average/8;
    cout << average << endl; 
    //readInputToString(65, 70, 10);
    //cout << countChar("aaaaaabb", 'b');
}
