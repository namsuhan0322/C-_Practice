# include <iostream>	// cout, cin, endl, ...
# include <cstdio>		// printf

int main()
{
	// cin = Console In
	// cout = Console Out
	// endl = End Line

	// cout << " " = cout�� ���ؼ� ���ϴ� ������ ����Ѵ�.
	// std::endl = ���� ������, �ٹٲ� ���� �ǹ�
	//std::cout << "���ϴ� ����" << std::endl;

	/*int x = 1024;
	double pi = 3.141592;
	std::cout << "x is " << x << ", pi is " << pi << std::endl;*/

	// \t : tap
	/*std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;*/

	//printf("����\n");

	using namespace std;

	int x = 1;

	cout << "Before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}