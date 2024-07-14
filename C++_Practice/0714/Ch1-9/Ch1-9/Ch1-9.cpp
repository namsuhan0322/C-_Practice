#include <iostream>

using namespace std;

// 1
int add(int x, int y)
{
	return x + y;
}
// 2
int add(int x, int y){
	return x + y;
}
// 1번이나 2번이나 어떻게 쓰든 상관없는데 나중에 협업할때는 합의하에 통일 시켜야한다.

// 이렇게 쓰면 X
int add(int x, int y) 
{
return x + y;
}

// Formatting
int main()
{
	cout << "Hello, World" << "abcdef" <<
		"Hello Home " << endl;
	return 0;
}