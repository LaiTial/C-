/*
2019-08-31
어서와 c++는 처음이지!
chapter2
LAB4
초등학생을 위한 산수 덧셈 문제 자동으로 출제
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int n1, n2, ans, gAns;

	srand(unsigned int(time(NULL)));

	cout << "산수 문제를 자동으로 출제합니다. 총 10문제 출제됩니다." << endl;

	for (int i = 0; i < 10; i++)
	{
		n1 = rand() % 100;
		n2 = rand() % 100;

		cout <<endl << n1 << " + " << n2 << ": ";
		cin >> gAns;

		ans = n1 + n2;

		if (gAns == ans)
			cout << "맞았습니다!" << endl;

		else
			cout << "잔넨-! 틀렸습니다!" << endl;
	}
	cout << "다음에도 또 이용해주시길 바라며 이만 프로그램을 종료하겠습니다!" << endl;

	return 0;
}
