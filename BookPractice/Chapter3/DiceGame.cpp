/*
�ֻ����� ���� ���� 7, 11�̸� ����ڰ� �̱��
2, 3, 12�̸� ����ڰ� ���� ����
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

	cout << "������� �ֻ���: " << x << "+" << y << "=" << sum << endl;

	if ((sum == 7) || (sum == 11))
		cout << "����ڰ� �̰���ϴ�!" << endl;
	else if ((sum == 2) || (sum == 3) || (sum == 12))
		cout << "����ڰ� �����ϴ�!" << endl;

	return 0;
}