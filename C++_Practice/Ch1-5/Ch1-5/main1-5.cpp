#include <iostream>

using namespace std;

//int multiplyTwoNumbers(int num_a , int num_b)
//{
//	//int sum = num_a + num_b;
//	int sum = num_a * num_b;
//
//	return sum;
//}

void printHelloWorld()
{
	cout << "Hello World!" << endl;	
}

int main()
{
	// 함수 funtion
	// 리턴값 return values
	// 매개변수 parameters
	// 인수	arguments

	/*cout << multiplyTwoNumbers(1, 2) << endl;
	cout << multiplyTwoNumbers(3, 4) << endl;
	cout << multiplyTwoNumbers(8, 13) << endl;*/

	printHelloWorld();

	// void를 쓴 경우 :
	// 함수사용시 void를 쓸 경우 수가 값을 반환하지 않는다는 것을 의미하고, 반환 타입의 함수에서는 return 문을 생략할 수 있지만, 
	// 함수의 실행을 즉시 종료하기 위해 return; 문을 사용할 수 있고,
	// 반환 타입의 함수는 호출할 때 값을 반환하지 않기 때문에 단순히 함수명();으로 호출한다.
 
	// void를 안쓸경우 :
	// 함수가 void가 아닌 반환 타입을 가지면, 반드시 해당 타입의 값을 return 문을 통해 반환해야 합니다.
	// 이 경우 함수는 값을 반환하며, 반환된 값은 호출부에서 사용할 수 있다.

	// 함수안에 함수만들수 없음

	return 0;
}