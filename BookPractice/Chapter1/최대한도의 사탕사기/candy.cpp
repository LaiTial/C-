/*
2019-08-03
어서와 c++는 처음이지! 51p
chapter1
LAB1
현재 가지고 있는 돈으로 몇개의 사탕을 살 수 있는 지 계산하는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
	int money, candy_price;

	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> candy_price;
	cout << "최대로 살 수 있는 캔디의 개수: " << money / candy_price << endl;
	cout << "캔디 구입 후 남은 돈: " << money % candy_price << endl;

	return 0;
}