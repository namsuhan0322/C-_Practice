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
// 1���̳� 2���̳� ��� ���� ������µ� ���߿� �����Ҷ��� �����Ͽ� ���� ���Ѿ��Ѵ�.

// �̷��� ���� X
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