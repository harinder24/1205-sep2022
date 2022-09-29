#include <iostream>
#include <cstring>
void assignment4a(char str[150]) {
	char user_input[6];
	char upper[150] = "upper";
	char lower[150] = "lower";
	std::cout << "String is - " << str << "\nType 'upper' to turn string in uppercase or type 'lower' for lowercase- ";
	std::cin >> user_input;
	int i = 0;
	if (strcmp(user_input, upper) == 0) {
		for (int i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
	else if (strcmp(user_input, lower) == 0) {
		while (str[i] != '\0') {
			if (str[i] >= 'A' && str[i] <= 'Z') {
				str[i] = str[i] + 32;
			}
			i++;
		}
	}
	else {
		std::cout << "Please enter valid answer that is 'lower' or 'upper\n'";
	};
	std::cout << str;
};