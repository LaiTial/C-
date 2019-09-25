/*
전화번호를 입력받아 입력받은 번호에서 ()를 찾아 제거해서 출력하는 프로그램
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string oPhone, cPhone = "";

	while (true)
	{
		cout << "전화번호를 입력하세요: ";
		getline(cin, oPhone);

		if (oPhone == "quit")
			break;

		for (int i = 0; i < (int)oPhone.length(); i++)
		{
			if ((oPhone[i] != '(') && (oPhone[i] != ')'))
				cPhone += oPhone[i];
		}

		cout << cPhone << endl;
		cPhone = "";
	}

	return 0;
}
