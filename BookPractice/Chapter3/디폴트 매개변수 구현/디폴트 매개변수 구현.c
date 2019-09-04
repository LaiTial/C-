/*
2019-09-04
어서와 c++는 처음이지!
chapter3
2~4개까지 자유롭게 매개변수를 받아 그 합을 출력하는 
디폴트 매개변수를 구현한 프로그램
디폴트 매개변수를 구현한 함수를 main 함수 뒤에 나올시 문제가 생김. 
그 부분 확인해봐야 할것!
*/

#include <iostream>

using namespace std;
int sum(int x, int y, int z = 0, int t = 0)
{
	return x + y + z + t;
}


int main(void)
{
	cout << "sum(10, 15):" << sum(10, 15) << endl;
	cout << "sum(10, 15, 25):" << sum(10, 15, 25) << endl;
	cout << "sum(10, 15, 25, 30):" << sum(10, 15, 25, 30) << endl;

	return 0;
}

