#include<iostream>
using namespace std;
class school
{
public:
	void homework()
	{
		cout << "��ҵ�ǡ�������" << endl;
	}
protected:
	void collecthomework()
	{
		cout << "����ҵ" << endl;
	}
	void correcthomework()
	{
		cout << "��ʦ������ҵ" << endl;
	}
};
	class teacher:public school
	{
		void correcthomework();
	};
    class students:public school
	{
		void homework();
		void collecthomework();
	};

int main()
{
	students xiaoming;
	xiaoming.homework();
	xiaoming.collecthomework();
	teacher wang;
	wang.correcthomework();


}
