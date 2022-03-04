#include "Rectangle.h"
#include <iostream>

int main()
{
	Rectangle rect1(10, 10, 100, 200);

	rect1.Show();

	int x, y;
	rect1.GetStartPoint(x, y);
	std::cout << x << ", " << y << std::endl;
	rect1.Move(20, 30);
	rect1.GetEndPoint(x, y);
	std::cout << x << ", " << y << std::endl;
	rect1.SetNotation(Rectangle::POINT_SIZE);
	rect1.Show();
	return 0;
}