#include "Rectangle.h"
#include <iostream>

int Rectangle::notation = Rectangle::POINT_POINT;

Rectangle::Rectangle() {
	SetRect(0, 0, 0, 0);
}

Rectangle::Rectangle(int left, int top, int right, int bottom)
{
	SetRect(left, top, right, bottom);
}

void Rectangle::SetRect(int left, int top, int right, int bottom)
{
	this->left = left;
	this->top = top;
	this->right = right;
	this->bottom = bottom;
}

int Rectangle::GetWidth() const
{
	return right - left;
}

int Rectangle::GetHeight() const
{
	return bottom - top;
}

void Rectangle::GetStartPoint(int& x, int& y) const
{
	x = left;
	y = top;
}

void Rectangle::GetEndPoint(int& x, int& y) const
{
	x = right;
	y = bottom;
}

bool Rectangle::IsPointInRectangle(int x, int y) const
{
	return ((x >= left && x <= right) && (y >= top && y <= bottom));
}

void Rectangle::Move(int x, int y)
{
	left += x;
	right += x;
	top += y;
	bottom += y;
}

void Rectangle::SetNotation(int n)
{
	notation = n;
}

void Rectangle::Show()
{
	switch (notation)
	{
	case POINT_POINT:
		std::cout << "(" << left << ", " << top << ")" << ", " << "(" << right << ", " << bottom << ")" << std::endl;
		break;
	case POINT_SIZE:
		std::cout << "(" << left << ", " << top << ")" << ", " << "[" << GetWidth() << ", " << GetHeight() << "]" << std::endl;
		break;
	default:
		break;
	}
}