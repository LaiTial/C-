/*
주사위를 굴려 합이 7, 11이면 사용자가 이기고
2, 3, 12이면 사용자가 지는 게임
*/

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	int x, y, sum;

	srand(unsigned int(time(NULL)));

	x = rand() % 6 + 1;
	y = rand() % 6 + 1;
	sum = x + y;

	cout << "사용자의 주사위: " << x << "+" << y << "=" << sum << endl;

	if ((sum == 7) || (sum == 11))
		cout << "사용자가 이겼습니다!" << endl;
	else if ((sum == 2) || (sum == 3) || (sum == 12))
		cout << "사용자가 졌습니다!" << endl;

	return 0;
}
