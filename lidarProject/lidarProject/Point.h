#pragma once

class Point
{
public:
	Point();
	void setPoint(int eX, int eY);
	int getX(); // ÁÂÇ¥°ª 
	int getY(); // ÁÂÇ¥°ª
	void setX(int eX);
	void setY(int eY);

private:
	int mX;
	int mY;
};