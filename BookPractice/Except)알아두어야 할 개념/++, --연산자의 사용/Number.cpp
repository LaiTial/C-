#include <iostream>

using namespace std;

int main(void)
{
	int i = 0;
	cout << i-- << ++i << ++i << ++i << endl;
	//3222
	/*++, -- 처럼 자기 자신의 값을 바꾸는 것들은(sideaffect)
	같은 arguments에 사용하면 안된다. 출력은 입력한 순서대로 되지만
	인자 넘겨주는 호출은 순서대로 안될 가능성이 많다. 
	!!! 함수에 sideaffect 발생하는 같은 변수를 여러개 넘겨주면 안되는 것도 마찬가지다.*/

	return 0;
}
