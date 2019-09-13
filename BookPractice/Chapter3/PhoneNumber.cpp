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