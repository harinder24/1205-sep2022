#include "pointexercise3.h"
#include <iostream>
using namespace std;

void Point3::printDetails()
{
	cout << "x = " << x << ", " << "y = " << y << endl;
}
Point3 ArrOfObj[10];
int Point3::pointArr(){
	Point3 obj;


	obj.x = 1;
	obj.y = 0;


	int length = sizeof(ArrOfObj);
	for (int i = 0; i < 10; i++) {
		if (i == 0) {
			obj.x = 1;
			obj.y = i;
		}
		else {
			obj.x *= 2;
			obj.y += 1;
		}
		ArrOfObj[i].Point31(obj.x, obj.y);
	}
	for (int i = 0; i < 10; i++) {
		ArrOfObj[i].printDetails();
	}
	return 0;
}



