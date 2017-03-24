#include<iostream>
using namespace std;
class complex
{
public:
	complex(complex &a);
	complex(double r = 0, double i = 0);
	void print();
	void operator=(complex a);
	friend complex operator+(complex a,complex b);
	friend complex operator-(complex a,complex b);
private:
	double real;
	double img;
};
complex::complex(complex &a)
{
	real = a.real;
	img = a.img;
}
complex::complex(double r, double i)
{
	real = r;
	img = i;
}
void complex::print()
{
	cout << real << "+" << "(" << img << "i" << ")";
}
void complex::operator=(complex a)
{
	real = a.real;
	img = a.img;
}
complex operator+(complex a,complex b)
{
	complex ok(b.real + a.real,b.img + a.img);
	return ok;
}
complex operator-(complex a,complex b)
{
	complex ok(a.real - b.real, a.img - b.img);
	return ok;
}

int main()
{
	complex a(6, 6), b(2, 2), ok;
	ok = a + b;
	ok.print();
	cout << endl;
	ok = a - b;
	ok.print();
	cout << endl;
	cout << "2017.3.21.18:59"<<endl<<"俞清源没我帅"<<endl;

	return 0;
}