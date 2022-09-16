#include <iostream>
void week2quiz2() {
	int arr[10];
	int total = 0;
	for (int i = 0; i < 10; i++) {
		std::cout << "Enter an integer - \n";
		std::cin >> arr[i];
		total += arr[i];
	};
	int average = total / 10;
	std::cout << "\nTotal is = " << total << " and average is " << average;
};