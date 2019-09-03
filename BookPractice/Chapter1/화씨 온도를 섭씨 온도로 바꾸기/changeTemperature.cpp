/*
2019-08-03
어서와 c++는 처음이지! 53p
chapter1
LAB2
화씨 온도를 섭씨 온도로 바꾸는 프로그램
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tem;
	double endTemp;

	cout << "화씨 온도를 입력하세요: ";
	cin >> tem;

	endTemp = ((tem - 32) / 9.0) * 5;
	cout << "섭씨온도는 " + to_string(endTemp) + "입니다" << endl;

	return 0;
}