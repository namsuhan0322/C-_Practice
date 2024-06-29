#include <iostream>

using namespace std;

int main()
{
	// 리터럴 Literal
	// 피연산자	Operand
	// 단항	unary
	// 이항	binary
	// 삼항	ternary
	
	int x = 2;	// x is a variable, 2 is a literal.

	// 리터럴
	cout << "My Home" << endl;

	// 피연산자
	cout << x + 2 << endl;
	cout << -x << endl;

	// 삼항연산자 (참 일경우 왼쪽, 거짓 일경우 오른쪽)
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;

	return 0;
}