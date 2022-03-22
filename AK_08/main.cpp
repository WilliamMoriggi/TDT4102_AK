//#include "std_lib_facilities.h"
#include <iostream>
#include "Matrix.h"
#include "Dummy.h"


void  fillInFibonacciNumbers(int* result, int length);
void printArray(int* arr, int length);
void createFibonacci();

void dummyTest();

int main()
{
    
    createFibonacci();

    Matrix a = Matrix(3,3);
    std::cout << a.get(2,2) << '\n';
    a.set(2,2,3);
    std::cout << a.get(2,2) << '\n';
    std::cout<<a;
    
    Matrix b = Matrix(a);
    b = a; 
    std::cout<<b;
    //dummyTest();
}
 


void  fillInFibonacciNumbers(int* result, int length){
    for(int i = 0; i<length;i++){
        if (i == 0)result[0] = 0;
        else if (i == 1)result[1] = 1;
        else result[i] = result[i-2] + result[i-1];
    }
}

void printArray(int* arr, int length){
        for(int i = 0; i<length; i++){
        std::cout << arr[i] << " ";
    }
}

 void createFibonacci(){
     int size = 0;
     std::cout << "how long do you want the fibbo? \n";
     std::cin >> size;
     int* n = new int[size];
     fillInFibonacciNumbers(n,size);
     printArray(n,size);
     delete[] n;
 }

void dummyTest() {
Dummy a;
*a.num = 4;
Dummy b{a};
Dummy c;
c = a;
std::cout << "a: " << *a.num << '\n';
std::cout << "b: " << *b.num << '\n';
std::cout << "c: " << *c.num << '\n';
*b.num = 3;
*c.num = 5;
std::cout << "a: " << *a.num << '\n';
std::cout << "b: " << *b.num << '\n';
std::cout << "c: " << *c.num << '\n';
}
