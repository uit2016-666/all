#include<iostream>
using namespace std;
class school
{
public:
	void homework()
	{
		cout << "作业是。。。。" << endl;
	}
protected:
	void collecthomework()
	{
		cout << "交作业" << endl;
	}
	void correcthomework()
	{
		cout << "老师批改作业" << endl;
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
