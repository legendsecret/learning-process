//构造函数的重载
//首先明确可以利用构造函数进行直接初始化
//构造函数重组即同时满足参数初始化和直接初始化
//求一个整数的平方

#include<iostream>
using namespace std;

class square
{
private:
	int a;
public:
	square()
	{
		a = 5;
	}
	square(int aa)
	{
		a = aa;
	}
	void output()
	{
		cout << "square=" << a * a << endl;
	}
};
int main()
{
	square c1;
	square c2(10);
	c1.output();
	c2.output();
	return 0;
}
