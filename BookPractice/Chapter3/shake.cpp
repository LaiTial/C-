#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(void)
{
	string answer = "apple", scranbleAnswer, guess;
	int num1, num2;

	srand(unsigned int(time(NULL)));
	scranbleAnswer = answer;

	for (int i = 0; i < int(scranbleAnswer.length()); i++)
	{
		num1 = rand()% scranbleAnswer.length();
		num2 = rand() % scranbleAnswer.length();

		int temp = scranbleAnswer[num1];
		scranbleAnswer[num1] = answer[num2];
		scranbleAnswer[num2] = temp;
	}

	cout << "��ũ���� ����-!" << endl;

	while (guess != answer)
	{
		cout << scranbleAnswer << "�� ������? ";
		cin >> guess;
	}

	cout << "���߼̱���! ����Ͻʴϴ�~!" << endl;

	return 0;
}