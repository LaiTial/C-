/*
2019-09-05
어서와 c++는 처음이지! 
chapter3
2개의 문자열을 입력받아 두 문자열의 길이가 동일한지 확인하고 동일할 시
문자열을 비교해 서로 다른 문자의 개수를 찾아내는 프로그램. 
*/

#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	string dna1, dna2;
	int haming = 0;

	do
	{
		cout << "DNA1: ";
		cin >> dna1;

		cout << "DNA2: ";
		cin >> dna2;

		if (dna1.length() != dna2.length())
			cout << "두 DNA의 길이가 다릅니다. 다시 입력해주세요!" << endl << endl;

	} while (dna1.length() != dna2.length());

	for ( int i = 0; i < signed(dna1.length()); i++)
	{
		if (dna1[i] != dna2[i])
			haming++;	
	}

	cout << "헤밍 거리는 " << haming << endl;

	return 0;
}
