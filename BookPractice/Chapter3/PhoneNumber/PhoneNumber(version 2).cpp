#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string oPhone;

	while (true)
	{
		cout << "��ȭ��ȣ�� �Է��ϼ���: ";
		getline(cin, oPhone);

		if (oPhone == "quit")
			break;

		for (int i = 0; i < (int)oPhone.length(); i++)
		{
			if ((oPhone[i] == '(') || (oPhone[i] == ')'))
				oPhone.erase(oPhone.begin()+i);
		}

		cout << oPhone << endl;
	}

	return 0;
}