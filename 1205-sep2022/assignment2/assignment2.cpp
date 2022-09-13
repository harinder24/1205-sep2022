#include <iostream>
void assignment2 ()  {
	int arr[101];
	int i = 0;
	while (i < 101) {
		if (i == 0) {
			arr[i] = 1;
		}
		else if (i == 1) {
			arr[i] = 10;
		}
		else {
			arr[i] = arr[i - 1] + 10;
		}
		std::cout << arr[i];
	}
}