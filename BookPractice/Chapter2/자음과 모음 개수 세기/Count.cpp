/*
2019-08-31
어서와 c++는 처음이지!
chapter2
LAB2
사용자로부터 영문자를 받아서 자음과 모음의 개수를 세는 프로그램
*/

#include <iostream>
using namespace std;

int main()
{
	char letter;
	int co = 0, vo = 0;

	cout << "영문자를 입력하고 *를 치세요." << endl;

	while (cin >> letter)
	{
		if (letter == '*')
			break;

		switch (letter)
		{
		case 'a': case 'u': case 'i': case 'o': case 'e':
			co++;
			break;
		default:
			vo++;
			break;
		}
	}
	cout << "모음: " << co << endl;
	cout << "자음: " << vo << endl;

	return 0;
}
