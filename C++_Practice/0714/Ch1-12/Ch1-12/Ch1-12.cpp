#include <iostream>
//#include "doSomething.h"
//#include "add.h"

int add(int a, int b)
{
	return a + b;
}

void doSomething()
{
	add(1, 2);
}

int add(int a, int b)
{
	return a + b;
}

// �������
// #include "doSomething.h", #include "add.h" ���� �ҷ����ԵǸ� add�Լ��� 2�� �ҷ����� �ֳ��� doSomething��� ���Ͽ� �̹� #include "add.h"�� �ҷ����� �ֱ� ����
using namespace std;

int main()
{
	doSomething();
	return 0;
}