#include <iostream>
void quiz4(bool* arr, int length, bool idk) {

	for (int i = 0; i < length; i++) {
		if (true == idk) {
			if (*(arr + i) != idk) {
				*(arr + i) = idk;
			};
		}
		else {
			*(arr + i) = false;
		};
	};
	for (int i = 0; i < length; i++) {
		if (*(arr + i) == true) {
			std::cout << "True \n";
		}
		else {
			std::cout << "False \n";
		};
	};
};