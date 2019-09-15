/*
문자열을 입력받아 교정하는(. 누르고 앞 문자 대문자로)
프로그램
*/

#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string sen;

	cout << "문자열을 입력하시오: ";
	getline(cin, sen);

	sen[0] = toupper(sen.front());
	
	if(sen.back() != '.')
		sen += '.';
	
	cout << "결과 문자열: " << sen << endl;

	return 0;
}