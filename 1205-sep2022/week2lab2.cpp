#include <iostream>
void week2lab2() {
	int arr[101];

	for (int i = 0; i < 101; i++) {
		if (i == 0) {
			arr[i] = 1;
		}
		else if (i == 1) {
			arr[i] = 10;
		}
		else {
			arr[i] = arr[i - 1] + 10;
		}
		std::cout << arr[i] << "\n";
	}
	

}
