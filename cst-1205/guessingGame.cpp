#include<iostream>
#include<ctime>
using namespace std;

void guessingGame() {
	int guessNumber;
	cout << "\nGuess a number between 0 and 9: ";
	cin >> guessNumber;
	srand(time(NULL));
	unsigned int number = rand() % 10;
	if (guessNumber == number) {
		cout << "\nCongratulation you guessed right number that is " << number;
	}
	else {
		cout << "\n Your guess is" << guessNumber << ", correct number is " << number;
	}


};