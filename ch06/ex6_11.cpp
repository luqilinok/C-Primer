#include<iostream>
using namespace std;

void reset(int &i)
{
	i = 0;
}

int main()
{
	int num = 10;
	cout << "重置前：" << num << endl;
	reset(num);
	cout << "重置后：" << num << endl;

	system("pause");
	return 0;
}
