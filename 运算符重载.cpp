#include<iostream>
using namespace std;
class A
{
public:
	A(int d) :data(d) {}
	friend A operator+(A&, A&);//��Ԫ����

private:
	int data;
};

//��Ԫ��������ʽ

A operator+(A &a1, A &a2)
{
	return A(a1.data + a2.data);
}

void main(void)
{
	A a1(1), a2(2), a3(3);
	a1 = a2 + a3;
}