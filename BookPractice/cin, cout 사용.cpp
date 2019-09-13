#include <iostream>

using namespace std;

int main(void)
{
	char str1[100], str2[100];
	cin >> str1 ;
	cin.getline(str2, 100);
	cin.get(str1, 2);
	cout << "str1: " << str1 << endl << "str2: " <<  str2 << endl;

	return 0;
}