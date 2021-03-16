#include<iostream>
using namespace std;
class Complex
{
	double real;
	double imag;
public:
	Complex(double a=0.0, double b=0.0) : real(a), imag(b) {};
	Complex operator+(Complex& c2);
	void display();
	Complex operator++();//前置
	Complex operator++(int);//后置
};
Complex Complex::operator+(Complex& c2)
{
	return Complex(real + c2.real, imag + c2.imag);
}
void Complex::display()
{
	cout << real << ',' << imag<<endl;
}
Complex Complex::operator++()
{
	real++;
	imag++;
	return*this;
}
Complex Complex::operator++(int)
{
	Complex old = *this;
	++(*this);//调用前置
	return *this;
}
int main()
{
	Complex c1(5, 4), c2(2, 10), c3;
	c3 = c1 + c2;
	c3.display();
	(++c3).display();
	(c3++).display();
}