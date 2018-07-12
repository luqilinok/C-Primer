#include<iostream>
#include<utility>

using namespace std;

template<typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

void f(int v1, int &v2)
{
	cout << v1 << " " << ++v2 << endl;
}

void g(int &&i, int& j)
{
	cout << i << " " << j << endl;
}

template<typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
	f(t2, t1);
}

template<typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2)
{
	f(t2, t1);
}

int main()
{
	int i = 0, j = 0, k = 0, l = 0;
	cout << i << " " << j << " " << k << " " << l << endl;

	f(42, i);
	flip(f, j, 42);
	flip1(f, k, 42);
	g(1, i);
	flip(g, i, 42);
	cout << i << " " << j << " " << k << " " << l << endl;

	system("pause");
	return 0;
}
