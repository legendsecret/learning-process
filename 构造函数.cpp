//利用构造函数进行类的初始化
//实现加法函数，用构造函数教进行赋值

//本质上就是删除原有的输入函数，并利用构造函数，在主函数中传入数据
//1.构造函数本身不具有返回值
//2.其名称与类的名称相同
//3.其本身是主动执行的（主函数中无调用语句）
#include<iostream>
using namespace std;

class calc
{
private:
	int a, b;
public:
	calc(int aa, int bb)
	{
		a = aa;
		b = bb;
	}
	void input()
	{
		cout << "input the first number:";
		cin >> a;
		cout << "input the second number:";
		cin >> b;
	}
	void output()
	{
		cout << "sum=" << a + b << endl;
	}
};
int main()
{
	calc c(1,2);
	c.output();
	return 0;
}