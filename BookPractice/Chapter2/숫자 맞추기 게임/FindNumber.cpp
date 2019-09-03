/*
2019-08-31
어서와 c++는 처음이지!
chapter2
LAB3
1~100 숫자 알아맞추기 게임
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	int ans, code;

	srand(unsigned int(time(NULL)));
	code = rand() % 100 + 1;

	while (true)
	{
		cout <<endl << "정답을 추측하여 보시오: ";
		cin >> ans;

		if (code > ans)
			cout << "제시한 정수가 낮습니다" << endl;

		else if (code < ans)
			cout << "제시한 정수가 높습니다" << endl;

		else
			break;
	}
	cout << "축하합니다! 정답을 맞히셨습니다!" << endl;

	return 0;
}
