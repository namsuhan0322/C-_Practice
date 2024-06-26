# include <iostream>	// cout, cin, endl, ...
# include <cstdio>		// printf

int main()
{
	// cin = Console In
	// cout = Console Out
	// endl = End Line

	// cout << " " = cout을 통해서 원하는 내용을 출력한다.
	// std::endl = 줄이 끝났다, 줄바꿈 생성 의미
	//std::cout << "원하는 내용" << std::endl;

	/*int x = 1024;
	double pi = 3.141592;
	std::cout << "x is " << x << ", pi is " << pi << std::endl;*/

	// \t : tap
	/*std::cout << "abc" << "\t" << "def" << std::endl;
	std::cout << "ab" << "\t" << "cdef" << std::endl;*/

	//printf("내용\n");

	using namespace std;

	int x = 1;

	cout << "Before your input, x was " << x << endl;

	cin >> x;

	cout << "Your input is " << x << endl;

	return 0;
}