/*
2019-08-03
��� c++�� ó������! 53p
chapter1
LAB2
ȭ�� �µ��� ���� �µ��� �ٲٴ� ���α׷�
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tem;
	double endTemp;

	cout << "ȭ�� �µ��� �Է��ϼ���: ";
	cin >> tem;

	endTemp = ((tem - 32) / 9.0) * 5;
	cout << "�����µ��� " + to_string(endTemp) + "�Դϴ�" << endl;

	return 0;
}