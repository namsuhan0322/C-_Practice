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

// 헤더가드
// #include "doSomething.h", #include "add.h" 같이 불러오게되면 add함수가 2번 불러와짐 왜나면 doSomething헤더 파일에 이미 #include "add.h"를 불러오고 있기 때문
using namespace std;

int main()
{
	doSomething();
	return 0;
}