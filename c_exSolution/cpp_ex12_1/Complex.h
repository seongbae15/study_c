#pragma once
#include <iostream>

using namespace std;

class Complex
{
public:
	Complex(double real = 0, double image = 0);
	~Complex();

	Complex operator+(const Complex c);
	Complex operator-(const Complex c);
	Complex operator*(const Complex c);
	Complex operator/(const Complex c);

	Complex& operator=(const Complex &c);
	Complex& operator+=(const Complex &c);
	Complex& operator-=(const Complex &c);
	Complex& operator*=(const Complex &c);
	Complex& operator/=(const Complex& c);

	bool operator==(const Complex& c);

	friend ostream& operator<<(ostream& os, const Complex& c);
	friend istream& operator>>(istream& is, Complex& c);

private:
	double real;
	double image;
};

