/*
2019-08-03
어서와 c++는 처음이지! 55p
chapter1
LAB3
2개의 주사위를 굴려 주사위의 합을 표시하는 프로그램
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int n1, n2;
	char space;
	srand(unsigned int(time(NULL)));

	cout << "첫번째 주사위를 굴리기 위해서는 문자 y을 입력하세요! ";
	cin >> space;

	n1 = rand() % 6 + 1;
	cout << "첫번째 숫자는 " << n1 << "!" << endl;

	cout << "두번째 주사위를 굴리기 위해서는 문자 y을 입력하세요! ";
	cin >> space;

	n2 = rand() % 6 + 1;
	cout << "두번째 숫자는 " << n2 << "!" << endl;

	cout << "두 주사위의 합 = " << n1 + n2 << endl;

	return 0;
}
