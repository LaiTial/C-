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
