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
