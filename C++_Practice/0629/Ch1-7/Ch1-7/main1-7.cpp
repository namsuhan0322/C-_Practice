#include <iostream>

using namespace std;

void doSomethinf(int x)
{
	x = 123;
	cout << x << endl;

	// 답 : 123
}

int main()
{
	//int x(0); // int x = 0;
	// 밑에 경우는 에러 발생
	//int x = 0;
	//int x = 1;

	//cout << x << " " << &x << endl;
	// 출력값 : 0 00000086B8AFF934

	// {}를 함수 안에 넣을수 있는 이유는 영역을 분리해주기 때문
	// {} 안에 있는것은 다른 메모리 식별자
	// 밑에 같은 경우는 에러가 안나고 정상작동
	//{
	//	int x = 1;
	//	cout << x << " " << &x << endl;
	//	// 출력값 : 1 00000086B8AFF954
	//}

	//{
	//	// 이렇게 할 경우 int x = 1; 와 는 다르게 기존에 선언했던 x랑 같은 주소가 나온다.
	//	x = 1;
	//	cout << x << " " << &x << endl;
	//	// 출력값 : 1 00000086B8AFF934
	//}

	//cout << x << " " << &x << endl;
	// 출력값 : 1 00000086B8AFF934
	
	// 지역 변수는 역역을 벗어나면 사용할 수 없게 됩니다.
	// 지역 변수가 차지하고 있던 메모리는 그 지역 변수가 역억을 벗어날 떄 "스택(stack)" 메모리로 반납됩니다.
	// 반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기합니다.

	int x = 0;

	cout << x << endl;
	// 답 : 0
	doSomethinf(x);
	cout << x << endl;
	// 답 : 0

	return 0;
}