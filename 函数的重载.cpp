//函数的重载
//多个函数在功能上有一定的相似性
//对这些函数使用同一个函数名，函数会根据参数数量不同进行自动调用
//条件：1.函数的参数个数不同  或   2.参数的类型不同

#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a + b;
}

int add(int a, int b, int c)
{
	return a + b + c;
}

int main()
{
	int a, b, c;
	a = 1;
	b = 2;
	c = 3;
	cout << "sum1=" << add(a, b) << endl;
	cout << "sum2=" << add(a, b, c) << endl;
	return 0;
} 