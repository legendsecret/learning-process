//面向过程编程
//具体运算过程放置于函数中进行处理
//
//求某数的平方
#include<iostream>
using namespace std;

int square(int n)
{
	return n * n;
}
int main()
{
	int a;
	cout << "input a number:";
	cin >> a;
	cout << "the result is:" << square(a) << endl;
	return 0;
}