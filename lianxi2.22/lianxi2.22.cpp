#include<iostream>
int main()
{
	int i = 0;
	int *p1 = nullptr;
	int *p = &i;
	if (p1)  //����ָ���ֵ����ָ����ָ�Ķ���ĵ�ַ��
	{
		std::cout << "p1 pass" << std::endl;
	}
	if (p)   //����ָ���ֵ����ָ����ָ�Ķ���ĵ�ַ��
	{
		std::cout << "p pass" << std::endl;
	}
	if (*p)  //���ָ����ָ�����ֵ
	{
		std::cout << "i pass" << std::endl;

	}
	system("pause");
	return 0;
}