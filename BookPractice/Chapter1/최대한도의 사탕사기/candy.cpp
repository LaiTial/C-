/*
2019-08-03
��� c++�� ó������! 51p
chapter1
LAB1
���� ������ �ִ� ������ ��� ������ �� �� �ִ� �� ����ϴ� ���α׷�
*/

#include <iostream>
using namespace std;

int main()
{
	int money, candy_price;

	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����: " << money / candy_price << endl;
	cout << "ĵ�� ���� �� ���� ��: " << money % candy_price << endl;

	return 0;
}