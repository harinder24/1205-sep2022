#include <iostream>
#include <string>
using namespace std;
void assignment5() {
	string userInput;
	int sum = 0;
	do
	{
		cout << "\nEnter a number to start adding and enter 0 to cancel adding: ";
		cin >> userInput;
		auto userInputToInteger = stoi(userInput);
		sum = sum + userInputToInteger;
	} while (userInput != "0");

	cout << "\nTotal output after addition is = " << sum;
}
