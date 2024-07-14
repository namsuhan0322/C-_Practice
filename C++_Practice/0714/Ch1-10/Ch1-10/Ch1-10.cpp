#include <iostream>

// 선언과 정의의 분리
using namespace std;

int add(int a, int b);			// forward declaration
int multiply(int a, int b);		// forward declaration
int subtract(int a, int b);		// forward declaration

int main()
{
	cout << add(1, 2) << endl;
	cout << multiply(1, 2) << endl;
	cout << subtract(1, 2) << endl;

	return 0;
}

// definition
int add(int a, int b)
{
	return a + b;
}

int multiply(int a, int b)
{
	return a * b;
}

int subtract(int a, int b)
{
	return a - b;
}

