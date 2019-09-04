/*
2019-09-04
어서와 c++는 처음이지!
chapter3
숫자 하나를 입력받아 그 수의 제곱을 출력하는 프로그램
제곱을 구하는 모듈은 따로 함수로 만들어진다.
이때 함수의 코드가 적기 때문에 인라인 함수를 사용하였다.
*/

#include <iostream>

using namespace std;
inline int multiple(int num);

int main(void)
{
	int num;

	cout << "숫자: ";
	cin >> num;

	cout << "입력받은 숫자의 제곱: " << multiple(num) << endl;

	return 0;
}

inline int multiple(int num)
{
	return num * num;
}
