#include <iostream>		// Preprocessor directive

int main(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	// std(namespace)�ȿ� �ִ� cout�� �����Ҽ��ִ�. <<(������)
	std::cout << y << std::endl;

	return 0;
}