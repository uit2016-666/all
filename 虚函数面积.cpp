#include<iostream>
using namespace std;
class picture   //����
{
public:
	picture(int, int);
	virtual void display();
protected:
	int chang;
	int kuan;
	
};
//picture ���Ա����ʵ��
picture::picture(int a, int b )
{
	chang = a;
	kuan = b;

}
void picture::display()
{
	cout << "�����εĳ���" << chang << "\n��" <<kuan<< "\n���Ϊ:" << chang*kuan << endl;
}
class changfangti:public picture
{
public:
	changfangti(int, int, int);
	void display();
private:
	int gao;

};
//changfangti���Ա������ʵ��
void changfangti::display()
{
	cout << "������ĳ���" << chang << "\n��" <<kuan<<"\n��:"<< gao<<"\n���Ϊ:" << chang*kuan*gao<< endl;
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
