#include <iostream>

using namespace std;

int main()
{
	// ���ͷ� Literal
	// �ǿ�����	Operand
	// ����	unary
	// ����	binary
	// ����	ternary
	
	int x = 2;	// x is a variable, 2 is a literal.

	// ���ͷ�
	cout << "My Home" << endl;

	// �ǿ�����
	cout << x + 2 << endl;
	cout << -x << endl;

	// ���׿����� (�� �ϰ�� ����, ���� �ϰ�� ������)
	int y = (x > 0) ? 1 : 2;

	cout << y << endl;

	return 0;
}