#include "Complex.h"

Complex::Complex(double real, double image)
{
	this->real = real;
	this->image = image;
}
Complex::~Complex()
{

}

Complex Complex::operator+(const Complex c)
{
	Complex temp;
	temp.real = real + c.real;
	temp.image = image + c.image;
	return temp;
}

Complex Complex::operator-(const Complex c)
{
	Complex temp;
	temp.real = real - c.real;
	temp.image = image - c.image;
	return temp;
}

Complex Complex::operator*(const Complex c)
{
	Complex temp;
	temp.real = real * c.real - image*c.image;
	temp.image = real*c.image + image * c.real;
	return temp;
}

Complex Complex::operator/(const Complex c)
{
	Complex temp;
	temp.real = (real * c.real + image * c.image)
				/(c.real*c.real + c.image*c.image);
	temp.image = (image * c.real - real * c.image)
		/(c.real * c.real + c.image * c.image);
	return temp;
}

Complex& Complex::operator=(const Complex& c)
{
	real = c.real;
	image = c.image;
	return *this;
}
Complex& Complex::operator+=(const Complex& c)
{
	real += c.real;
	image += c.image;
	return *this;

}
Complex& Complex::operator-=(const Complex& c)
{
	real -= c.real;
	image -= c.image;
	return *this;
}
Complex& Complex::operator*=(const Complex& c)
{
	double temp;
	temp = real * c.real - image * c.image;
	image = real * c.image + image * c.real;
	real = temp;
	return *this;
}
Complex& Complex::operator/=(const Complex& c)
{
	double temp;
	temp = (real * c.real + image * c.image)
		/ (c.real * c.real + c.image * c.image);
	image = image * c.real - real * c.image
		/ (c.real * c.real + c.image * c.image);
	real = temp;
	return *this;
}

bool Complex::operator==(const Complex& c)
{
	return (real == c.real && image == c.image);
}

ostream& operator<<(ostream& os, const Complex& c)
{
	if (c.image > 0)
	{
		os << c.real << "+" << c.image << "i";
	}
	else if (c.image < 0)
	{
		os << c.real << c.image << "i";
	}
	else
		os << c.real;
	return os;
}

istream& operator>>(istream& is, Complex& c)
{
	is >> c.real;
	is >> c.image;
	return is;
}
