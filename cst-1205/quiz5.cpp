#include <iostream>
#include <cstring>

void quiz5()
{
	char name[50];
	char address[100];
	char email[50];
	char occupation[50];
	char dash[10] = " - ";
	std::cout << "What's your name - ";
	std::cin.getline(name, 50);
	std::cout << "What's your address - ";
	std::cin.getline(address, 100);
	std::cout << "What's your email - ";
	std::cin.getline(email, 50);
	std::cout << "What's your occupation - ";
	std::cin.getline(occupation, 30);

	char message[300];
	strncpy(message, name, 300 - strlen(name));
	strncat(message, dash, 300 - strlen(dash));
	strncat(message, address, 300 - strlen(address));
	strncat(message, dash, 300 - strlen(dash));
	strncat(message, email, 300 - strlen(email));
	strncat(message, dash, 300 - strlen(dash));
	strncat(message, occupation, 300 - strlen(occupation));
	std::cout << message;
};