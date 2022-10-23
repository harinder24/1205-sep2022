#include "pointexercise3.h"
#include <iostream>
using namespace std;

void Point3::printDetails()
{
	cout << "x = " << x << ", " << "y = " << y << endl;
}
Point3 ArrOfObj[10];
int Point3::pointArr(){
	this->x = 1;
	this->y = 0;


	int length = sizeof(ArrOfObj);
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			this->x = 1;
			this->y = i;
		}
		else {
			this->x *= 2;
			this->y += 1;
		}
		ArrOfObj[i].Point33(this->x, this->y);
	}
	for (int i = 0; i < 10; i++) {
		ArrOfObj[i].printDetails();
	}
	exit(0);
}



