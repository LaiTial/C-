/*
2019-09-04
어서와 c++는 처음이지!
chapter3
swap 함수(두 변수의 뒤바꾸는 함수)구현한 프로그램
*/

#include <iostream>

using namespace std;
void swap(int& a, int& b);

int main(void)
{
	int a = 100, b = 200;

	cout << "a: " << a << ", b: " << b << endl << endl;
	swap(a, b);
	cout << "a: " << a << ", b: " << b << endl << endl;

	return 0;
}

void swap(int& a, int& b)
{
	int temp;

	cout << "swap 함수를 실행합니다!" << endl;

	temp = a;
	a = b;
	b = temp;
}
