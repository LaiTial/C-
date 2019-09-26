#include <iostream>

using namespace std;

void getSnail(char** Snail, int& init, int& where, int what, char type, int n);
void inited(char** Snail, int n);
bool checked(char** Snail, int x, int y, int i, int n);
void print(char** Snail, int n);

int main(void)
{
	int n, x = 0, y = 0, i=0;
	char **SnailSpace;
	bool end = true;

	cout << "달팽이가 움직일 N의 값: ";
	cin >> n;

	SnailSpace = new char*[n+1];
	for (int i = 0; i < n+1; i++)
	{
		SnailSpace[i] = new char[n];
	}

	inited(SnailSpace, n);

	do
	{
		getSnail(SnailSpace, x, y, i, '*', n);

		int temp = x;
		x = y;
		y = temp;

		end = checked(SnailSpace, y, x, i, n);
	
		i++;
		if (i % 4 == 0)
			i = 0;
		
	} while (end != true);

	print(SnailSpace, n);
}

void inited(char** Snail, int n)
{
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n; j++)
			Snail[i][j] = NULL;
	}
}

bool checked(char** Snail, int x, int y, int i, int n)
{
	if(i != 0)
		if(y-2 >= 0)
			if(Snail[x][y-2] != '*')
				return false;
			
	if(i != 1)
		if(x-2 >= 0)
			if(Snail[x-2][y] != '*')
				return false;	
			
	if(i != 2)
		if(y+2 < n)
			if(Snail[x][y+2] != '*')
				return false;
			
	if(i != 3)
		if(x+2 <= n)
			if(Snail[x+2][y] != '*')
				return false;

	return true;
}

void print(char** Snail, int n)
{
	for (int i = 0; i < n+1; i++)
	{
		for (int j = 0; j < n; j++)
			cout << Snail[i][j] << " ";
		cout << endl;
	}
}

void getSnail(char **Snail, int& init, int& where, int what, char type, int n)
{
	switch (what)
	{
	case 0:
		while ((init < n))
		{
			Snail[where][init] = type;

			init++;
			
			if (init + 1 < n)
				if (Snail[where][init + 1] == type)
					break;
		}
		init--;
		break;
	case 1:
		while ((init <= n))
		{
			Snail[init][where] = type;

			init++;
			if (init + 1 <= n)
				if (Snail[init + 1][where] == type)
					break;
		}
		init--;
		break;

	case 2:
		while ((init >= 0))
		{
			Snail[where][init] = type;

			init--;
			
			if (init - 1 >= 0)
				if (Snail[where][init - 1] == type)
					break;			
		}
		init++;
		break;

	case 3:
		while ((init >= 0))
		{
			Snail[init][where] = type;

			init--;
			
			if (init - 1 >= 0)
				if (Snail[init- 1][where] == type)
					break;			
		}
		init++;
		break;
	}
}
