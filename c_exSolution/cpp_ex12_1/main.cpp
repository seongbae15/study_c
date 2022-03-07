#include "Complex.h"

int main()
{
	Complex a, b;
	cout << "첫 번째 복소수 입력: ";
	cin >> a;
	cout << "두 번째 복소수 입력: ";
	cin >> b;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	cout << "a+b = " << a + b << endl;
	cout << "a-b = " << a - b << endl;
	cout << "a*b = " << a * b << endl;
	cout << "a/b = " << a / b << endl;

	return 0;
}