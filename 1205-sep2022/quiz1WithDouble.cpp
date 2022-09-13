#include <iostream>

void quiz1WithDouble()
{

	double firstFahrenheit = 0.0, secondFahrenheit = 0.0, thirdFahrenheit = 0.0;
	std::cout << "Please enter three number separated by space to change them from Fahrenheit to Celcius- ";
	std::cin >> firstFahrenheit >> secondFahrenheit >> thirdFahrenheit;
	double result1 = (firstFahrenheit - 32.0) * 5 / 9;
	double result2 = (secondFahrenheit - 32.0) * 5 / 9;
	double result3 = (thirdFahrenheit - 32.0) * 5 / 9;

	std::cout << "\n" << firstFahrenheit << " changes to " << result1 << ", " << secondFahrenheit << " changes to " << result2 << " and " << thirdFahrenheit << " changes to " << result3 << "\n";
	

}
//reyhrhyhtht