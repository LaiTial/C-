#include <iostream>

using namespace std;
bool checkBool(bool ch[]);

int main(void)
{
	string secretCode;
	bool ch[3] = { false };

	cout << "암호를 입력하세요: ";
	cin >> secretCode;

	for (int i = 0; i < (int)secretCode.length(); i++)
	{
		if (isalnum(secretCode[i]))
			ch[0] = true;
		if (isalpha(secretCode[i]))
		{
			ch[1] = true;

			if (toupper(secretCode[i]) == secretCode[i])
			{
				ch[2] = true;
			}
		}
	}

	if (checkBool(ch))
		cout << "안전한 암호입니다!" << endl;

	else
		cout << "안전하지 않은 암호입니다. 다시 입력해주세요!" << endl;
}

bool checkBool(bool ch[])
{
	for (int i = 0; i < 3; i++)
	{
		if (ch[i] == false)
			return false;
	}

	return true;
}
