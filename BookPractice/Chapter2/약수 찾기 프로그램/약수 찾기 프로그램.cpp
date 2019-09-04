/*
2019-09-04
어서와 c++는 처음이지! 
chapter2
사용자에게 숫자 하나를 입력받아 그 수의 약수를 모두 찾아 출력하는 프로그램
*/

#include <iostream>

using namespace std;

int main(void)
{
	int num;

	cout << "숫자: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		if (num % i == 0)
			cout << i << " ";
	}
	cout << endl;

	return 0;
}
