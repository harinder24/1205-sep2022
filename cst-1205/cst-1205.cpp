// cst-1205.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "assignment1.h"
#include "week2quiz1.h"
#include "week2lab1.h"
#include "week2lab2.h"
#include "assignment2.h"
#include "week2quiz2.h"
#include "assignment3part1_harinder.h"
#include "assignment3part2_harinder.h"
int main()
{
	assignment1();
	week2quiz1();
	week2lab1();
	week2lab2();
	assignment2();
	week2quiz2();

	int myarr1[10] = {23, 34, 54, 55, 66, 66, 65, 43, 34, 21};
	int* locator = myarr1;
	Print(locator, 10);

	int myarr2[10] = { 42, 34, 54, 65, 23, 45, 78, 12, 11, 2 };
	int* locator2 = myarr2;
	std::cout << "Average = " << CalculateAverage(locator2, 10);
};

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
