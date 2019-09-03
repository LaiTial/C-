/*
2019-08-31
어서와 c++는 처음이지! 
chapter2
LAB1
컴퓨터가 숨기고 있는 비밀코드를 추측하는 프로그램
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
		cout << "비밀코드를 맞춰보세요: ";
		cin >> ans;

		if (code > ans)
			locate = " 뒤에 있음.";

		else if (code < ans)
			locate = " 앞에 있음.";

		else
		{
			break;
		}

		cout << ans << locate << endl << endl;

	} while (code != ans);

	cout << "축하합니다! 비밀코드를 맞추셨습니다!" << endl;
	

	return 0;
}