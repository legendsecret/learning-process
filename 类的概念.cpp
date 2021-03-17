//类的概念
//将有联系的两个函数放在同一个结构体中


//实现两数加减的函数
#include<iostream>
using namespace std;
class cal//class为定义类的关键词
{
public://属性为公有的
	int a, b;
	int add()
	{
		return a + b;
	}
	int sub()
	{
		return a - b;
	}
	void output()
	{
		cout << a << "+" << b << "=" << add() << endl;
		cout << a << "-" << b << "=" << sub() << endl;
	}
};
int main()
{
	cal c;//定义结构体变量
	c.a = 1;
	c.b = 2;
	c.output();
	return 0;
}