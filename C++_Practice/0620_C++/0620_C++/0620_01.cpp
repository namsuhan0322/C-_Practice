#include <iostream>		// Preprocessor directive

int main(void)
{
	int x = 2;
	x = 5;
	int y = x + 3;

	// std(namespace)안에 있는 cout로 접근할수있다. <<(연산자)
	std::cout << y << std::endl;

	return 0;
}