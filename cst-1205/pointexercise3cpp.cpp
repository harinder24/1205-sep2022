#include "pointexercise3.h"
#include <iostream>
using namespace std;

void Point3::printDetails()
{
	cout << "x = " << x << ", " << "y = " << y << endl;
}
Point3 ArrOfObj[10];
Point3::Point3()
{
}
Point3::Point3(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Point3::pointArr(){
	this->x = 1;
	this->y = 0;

	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			this->x = 1;
			this->y = i;
		}
		else {
			this->x *= 2;
			this->y += 1;
		}
		ArrOfObj[i] = Point3(this->x, this->y);
		cout << "x = " << x << ", " << "y = " << y << endl;
	}
}



