#include <iostream>
int CalculateAverage(int *pi, int n) {
	int total = 0;
	for (int i = 0; i < n; i++) {
		total = total + *(pi + i);
	};
	int average = total / n;
	return average;
};