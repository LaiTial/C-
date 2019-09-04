/*
2019-09-04
어서와 c++는 처음이지! 
chapter2
난수를 발생시켜 배열에 숫자를 초기화시키고, 그 배열에서 최대값을 찾는 프로그램
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	int array[10];
	int leastNum;
	srand(unsigned int(time(NULL)));

	for (auto &li : array)
	{
		li = rand() % 100;
	}

	leastNum = array[0];

	for (auto& li : array)
	{
		if (li > leastNum)
			leastNum = li;
	}

	for (auto& li : array)
	{
		cout << li << " ";
	}
	cout << endl;
	cout << "최대값: " << leastNum << endl;


	return 0;
}
