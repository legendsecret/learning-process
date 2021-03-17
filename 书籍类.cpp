//书籍类
//成员数据有number,name,书的编号和书名
//成员函数有输入，输出函数
//主函数中定义书的对象，输入输出相关内容
#include<iostream>
#include<string>
using namespace std;

class book
{
private:
	int number;
	string name;//C++中直接使用string定义字符串，需要引头文件string
public:
	void input()
	{
		cout << "input book number:";
		cin >> number;
		cout << "input book name:";
		cin >> name;
	}
	void output()
	{
		cout << number << ":" << name << endl;
	}
};
int main()
{
	book b;
	b.input();
	b.output();
	return 0;
}