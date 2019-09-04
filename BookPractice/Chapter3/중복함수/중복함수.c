/*
2019-09-04
어서와 c++는 처음이지!
chapter3
정수, 실수, 문자를 모두 출력할 수 있는 print()함수를
중복함수로 만들어 사용해보는 프로그램
*/

#include <iostream>

using namespace std;
void print(double x);
void print(char x);
void print(int x);

int main(void)
{
	print(100);
	print(3.14);
	print('C');

	return 0;
}

void print(int x)
{
	cout << "정수: " << x << endl;
}

void print(char x)
{
	cout << "문자: " << x << endl;
}

void print(double x)
{
	cout << "실수: " << x << endl;
}
