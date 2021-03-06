#include<iostream>
#include<string>

using namespace std;
using std::string;

bool HasUpper(const string& str)   //因为判断string对象中是否含有大写字母，无需修改形参的值，因此将其设为常量引用类型
{
	for (auto c : str)
	{
		if (isupper(c))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	
}

void ChangeToLower(string& str)  //该函数需要修改形参的内容，所以要将其设定为非常量引用类型
{
	for (auto &c:str)   //如果想改变string对象中字符的值，必须把循环变量定义成引用类型
	{
		c = tolower(c);
	}
}

int main()
{
	cout << "请输入一个字符串:" << endl;
	string str;
	while (cin>>str)
	{
		if (HasUpper(str))
		{
			ChangeToLower(str);
			cout << "转换后的字符串是:" << str << endl;
		}
		else
		{
			cout << "该字符串中无大写字母，无需转换" << endl;
		}
	}
	system("pause");
	return 0;
}
