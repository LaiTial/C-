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
