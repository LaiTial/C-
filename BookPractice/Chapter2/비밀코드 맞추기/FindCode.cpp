/*
2019-08-31
��� c++�� ó������! 
chapter2
LAB1
��ǻ�Ͱ� ����� �ִ� ����ڵ带 �����ϴ� ���α׷�
97~122 => a~z
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	char code = 97, ans;
	string locate;

	srand(unsigned int(time(NULL)));

	code += rand() % 26;

	do
	{
		cout << "����ڵ带 ���纸����: ";
		cin >> ans;

		if (code > ans)
			locate = " �ڿ� ����.";

		else if (code < ans)
			locate = " �տ� ����.";

		else
		{
			break;
		}

		cout << ans << locate << endl << endl;

	} while (code != ans);

	cout << "�����մϴ�! ����ڵ带 ���߼̽��ϴ�!" << endl;
	

	return 0;
}