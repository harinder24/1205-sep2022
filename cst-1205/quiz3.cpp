#include <iostream>

void quiz3(bool* myarr, int length) {

	for (int i = 0; i < length; i++) {
		if (*(myarr + i) == true) {
			std::cout << "This is true\n";
		}
		else{
			std::cout << "This is false\n";
		};
	};
};