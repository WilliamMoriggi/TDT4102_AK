#include "std_lib_facilities.h"

int maxOfTwo(int a, int b);
int fibonacci(int n);
int squareNumberSum(int n);
void triangleNumbersBelow(int n);
bool isPrime(int n);
void naivePrimeNmberSearch(int n);
int findGreatestDivisor(int n);

int main()
{
	int x = 1;
	int y = 3;
	cout << "Oppgave 2a)\n";
	cout << maxOfTwo(x,y) << '\n';

	int z = 13;
	cout << "Oppgave 2c)\n";
	cout << fibonacci(z) << '\n';

    int x1 = 3;
	cout << "Oppgave 2d)\n";
	cout << squareNumberSum(x1) << '\n';
	
	int y1 = 6;
	cout << "Oppgave 2e)\n";
	triangleNumbersBelow(y1);

	int z1 = 9;
	cout << "Oppgave 2f)\n";
    cout << isPrime(z1) << '\n';

	int x2 = 8;
	cout << "Oppgave 2g)\n";
	naivePrimeNmberSearch(x2);
	cout << '\n';

	int y2 = 8;
	cout << "Oppgave 2h)\n";
	cout << findGreatestDivisor(y2) << '\n';


}

int maxOfTwo(int a, int b){
	if(a > b){
		cout << "A is greater than B\n";
		return a;
	}
	else{
		cout << "B is greater than or equal to A\n";
		return b;
	}
}

int fibonacci(int n){
	int a = 0;
	int b = 1;
	cout << "Fibonacci numbers:\n";
	for(int i = 1; i < n+1; i++){
		cout << i << b << '\n';
		int temp = b;
		b += a;
		a = temp;
	}
	cout << "----";
	return b;
}

int squareNumberSum(int n){
	int totalSum = 0;
	for(int i = 0; i < n;i++){
		totalSum += i*i;
		cout << i*i << '\n';
	}
	cout << totalSum;
	return totalSum;
}

void triangleNumbersBelow(int n){
	int acc = 1;
	int num = 2;
	cout << "Triangle number below " << n << ":" << "";
	while(acc < n){
		cout << acc; 
		acc += num;
		num += 1;
	}
	cout << "\n";
}

bool isPrime(int n){
	for(int i = 2; i < n; i++){
		if (n%i == 0){
			return false;
		}
	}
	return true;
}

void naivePrimeNmberSearch(int n){
	for(int i = 2; i < n; i++){
		if (isPrime(i)){
			cout << i << " is a prime ";
		}
	}
}

int findGreatestDivisor(int n){
	for(int i = n-1; i > 0; i--){
		if ( n%i == 0 ){
			return i;
		}
	}
}
