#pragma once
class Rectangle
{
public:
	Rectangle();
	Rectangle(int left, int top, int right, int bottom);

	int GetWidth() const;
	int GetHeight() const;
	void GetStartPoint(int& x, int& y) const;
	void GetEndPoint(int& x, int& y) const;
	bool IsPointInRectangle(int x, int y) const;

	void SetRect(int left, int top, int right, int bottom);
	void Move(int x, int y);

	void Show();
	static void SetNotation(int notation);
	

private:
	int left;
	int top;
	int right;
	int bottom;

	static int notation;

public:
	enum {
		POINT_POINT,
		POINT_SIZE,
	}POINT_NOTATION;
};

