#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(void)
{
	string answer[] = {
		"christmas",
		"halloween",
		"party"
	};

	srand(unsigned int(time(NULL)));
	int number = rand() % 3;
	char guess;
	string space(answer[number].length(), '_');

	while (space != answer[number])
	{
		cout << space << endl<< endl;
		cout << "���ڸ� �Է��Ͻÿ�: ";
		cin >> guess;

		for (int i = 0; i < int(answer[number].length()); i++)
			if (guess == answer[number][i])
				space[i] = guess;
	}

	cout << endl << space <<endl <<  "�����Ͽ����ϴ�!" << endl;

	return 0;
}