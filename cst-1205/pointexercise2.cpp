#include "pointexercise2.h"
#include <iostream>
int Point2::GetX()
{
	return x;
}

int Point2::GetY()
{
	return y;
}

void Point2::SetX(int x)
{
	this->x = x;
	if (this->x > 100) {
		this->x = 100;
	}
	if (this->x < -100) {
		this->x = -100;
	}
	
	
}
void Point2::SetY(int y)
{
	this->y = y;
	if (this->y > 100) {
		this->y = 100;
	}
	if (this->y < -100) {
		this->y = -100;
	}

}