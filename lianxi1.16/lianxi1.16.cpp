#include<iostream>
int main()
{
	int sum = 0, value = 0;
	std::cout << "������һЩ������Ctrl+Z����" << std::endl;
	for (; std::cin >> value;)
		sum += value;
	std::cout << "�������֮��Ϊ" << sum<<std::endl;
	system("pause");
	return 0;
}