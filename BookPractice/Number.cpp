#include <iostream>

using namespace std;

int main(void)
{
	int i = 0;
	cout << i-- << ++i << ++i << ++i << endl;
	//3222
	/*++, -- ó�� �ڱ� �ڽ��� ���� �ٲٴ� �͵���(sideaffect)
	���� arguments�� ����ϸ� �ȵȴ�. ����� �Է��� ������� ������
	���� �Ѱ��ִ� ȣ���� ������� �ȵ� ���ɼ��� ����. 
	!!! �Լ��� sideaffect �߻��ϴ� ���� ������ ������ �Ѱ��ָ� �ȵǴ� �͵� ����������.*/

	return 0;
}