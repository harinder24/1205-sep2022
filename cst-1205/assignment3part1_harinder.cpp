#include <iostream>
//int arr[] = {23, 34, 54, 55, 66, 66, 65, 43, 34, 21};
//int n = sizeof(arr);
//int* pi = arr;

void Print(int *pi, int n) {
	for (int i = 0; i < n; i++) {
		std::cout << *(pi + i) << "\n";
	};
};