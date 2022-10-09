#include<iostream>
#include<ctime>
using namespace std;

void assignment6a() {
	int n = 1;
	int userInput = 0;
	bool myBool;
	srand(time(NULL));
	unsigned int number = rand() % 50;
	cout << number ;
	char character;
	int gameWon = 0;
	int gameLost = 0;

	do
	{
		myBool = false;
		cout << "\nGuess a Number: ";
		cin >> userInput;
		if(userInput != number && n == 20){
			gameLost++;
			cout << "\nGame over you reached max guess limit of 20 and number was " << number << "\nGame won = " << gameWon << " and game lost = " << gameLost <<
				"\nTo play again type 'Y' and 'N' to stop playing: ";
			cin >> character ;
			if (character == 'Y' || character == 'y') {
				n = -1;
				cout << "\nGood luck this time";
			}
			else if (character == 'N' || character == 'n') {
				cout << "\nThank you for playing";
				break;
			}
		}
		else if (userInput == number) {
			gameWon++;
			cout << "\nCongratulation you guessed right number that is " << userInput << " in " << n << " tries" <<
			"\nGame won = " << gameWon << " and game lost = " << gameLost <<
			"\nTo play again type 'Y' and 'N' to stop playing: ";
			cin >> character;
			if (character == 'Y' || character == 'y') {
				n = -1;
				cout << "\nGood luck";
				myBool = true;
			
			}
			else if (character == 'N' || character == 'n') {
				cout << "\nThank you for playing";
				break;
			}
		}
		else if(userInput != number){
			if (number > userInput) {
				cout << "\nWrong guess secret number is greater than your input " << userInput << ": ";
			}
			else if (number < userInput) {
				cout << "\nWrong guess secret number is lower than your input " << userInput <<": ";
			}
		}
		n++;
	} while ((((n == 21 || userInput == number) == false)  == false && myBool == false) == false );
}