/*
���ڿ��� �Է¹޾� �����ϴ�(. ������ �� ���� �빮�ڷ�)
���α׷�
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string sen;

	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, sen);

	sen[0] = toupper(sen.front());
	
	if(sen.back() != '.')
		sen += '.';
	
	cout << "��� ���ڿ�: " << sen << endl;

	return 0;
}