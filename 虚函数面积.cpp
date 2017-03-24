#include<iostream>
using namespace std;
class picture   //基类
{
public:
	picture(int, int);
	virtual void display();
protected:
	int chang;
	int kuan;
	
};
//picture 类成员函数实现
picture::picture(int a, int b )
{
	chang = a;
	kuan = b;

}
void picture::display()
{
	cout << "长方形的长：" << chang << "\n宽：" <<kuan<< "\n面积为:" << chang*kuan << endl;
}
class changfangti:public picture
{
public:
	changfangti(int, int, int);
	void display();
private:
	int gao;

};
//changfangti类成员函数的实现
void changfangti::display()
{
	cout << "长方体的长：" << chang << "\n宽：" <<kuan<<"\n高:"<< gao<<"\n体积为:" << chang*kuan*gao<< endl;
}
changfangti::changfangti(int a, int b, int c) :picture (a, b), gao(c) {}
int main()
{
	picture  x(5,6);
	changfangti y(1, 2, 3);
	picture * p=&x;
	p->display();
	p = &y;
	p->display();
	return 0;
}
