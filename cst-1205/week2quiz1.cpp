
#include <iostream>

void week2quiz1()
{

	int firstFahrenheit = 0, secondFahrenheit = 0, thirdFahrenheit = 0;
	std::cout << "Please enter three integer separated by space to change them from Fahrenheit to Celcius- ";
	std::cin >> firstFahrenheit >> secondFahrenheit >> thirdFahrenheit;
	int result1 = (firstFahrenheit - 32.0) * 5 / 9;
	int result2 = (secondFahrenheit - 32.0) * 5 / 9;
	int result3 = (thirdFahrenheit - 32.0) * 5 / 9;

	std::cout << "\n" << firstFahrenheit << " changes to " << result1 << ", " << secondFahrenheit << " changes to " << result2 << " and " << thirdFahrenheit << " changes to " << result3 << "\n";


}