#include<iostream>
int main()
{
	std::cout << "please enter two numbers" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	if (v1 > v2)    //由小至大打印

		while (v1 >= v2)
		{
			std::cout << v1 << " ";
			v1--;
		}

	else   //由大至小打印

		while (v1 <= v2)
		{
			std::cout << v1 << " ";
			v1++;
		}

	std::cout << std::endl;
	return 0;
}
