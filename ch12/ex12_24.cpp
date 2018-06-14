#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char c;

	//分配20个字符的动态数组，因此最多存放19个字符
	char *r = new char[20];
	int l = 0;

	while (cin.get(c))
	{
		r[l++] = c;  //存入动态数组
		if (l==20)   //已读入19个字符
		{
			cout << "达到数组容量上限" << endl;
			break;
		}
	}
	r[l] = 0;
	cout << r << endl;

	//释放动态数组
	delete[] r;

	system("pause");
	return 0;
}
