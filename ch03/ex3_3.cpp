#include<iostream>
#include<string>

using namespace std;

int main()
{
	string word, line;
	cout << "请选择读取字符串的方式：1表示逐词读取，2表示整行读取" << endl;
	char ch;
	cin >> ch;
	if (ch =='1')
	{
		cout << "请输入字符串：welcome to C++ family!" << endl;
		cin >> word;
		cout << "系统读取的有效字符串是：" << endl;
		cout << word << endl;
		system("pause");
		return 0;
	}
	//清空输入缓冲区
	cin.clear();
	cin.sync();
	if (ch =='2')
	{
		cout << "请输入字符串：Welcome to C++ family!" << endl;
		cin >> word;
		cout << "系统读取的有效字符串是：" << endl;

		system("pause");
		return 0;
	}
	cout << "您的输入有误！";

	system("pause");
	return 0;

}
