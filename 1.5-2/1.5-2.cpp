#include<iostream>
#include"Sales_item.h"
int main()
{
	Sales_item item1, item2;
	std::cin >> item1 >> item2;                //��ȡһ�Խ��׼�¼
	std::cout << item1 + item2 << std::endl;   //��ӡ���ǵĺ�
	system("pause");
	return 0;
}