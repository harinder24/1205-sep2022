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
		cout << "\nCongratulation you guessed right number";
	}
	else {
		cout << "\n You guessed a wrong number, correct number was " << number;
	}


};