//平面点类
//定义一个平面点类，成员数据有x，y(int);成员函数有输入输出函数
//主函数中定义点的对象，输入输出这个点的坐标
#include<iostream>
using namespace std;

class point
{
private:
	int x, y;
public:
	void input()
	{
		cout << "input x:";
		cin >> x;
		cout << "input y:";
		cin >> y;
	}
	void output()
	{
		cout << "the point is:";
		cout << "(" << x << "," << y << ")" << endl;

	}
};
int main()
{
	point c;
	c.input();
	c.output();
	return 0;
}