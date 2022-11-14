#include <iostream>
#include "GameManager.h"
#include <string>
#include "Player.h"
using namespace std;
Player p;
void GameManagement::WelcomePlayer(const string& name)
{
	p.setGameLost();
	p.setGameWon();
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;
	if (playerInput == "n") {
		
		int n = 1;
		int userInput = 0;
		bool myBool;
		srand(time(NULL));
		unsigned int number = rand() % 50;
		char character;

		do {

			do
			{
				cout << "\nGuess a Number between 0 and 49: ";
				cin >> userInput;
			} while ((userInput < 50 && userInput >= 0) == false);
			if (userInput != number && n == 20) {			
				p.addGameLost();
				cout << "\nGame over you reached max guess limit of 20 and secret number was " << number << "\nGame won = " << p.getGameWon() << " and game lost = " << p.getGameLost() << endl;
			}
			else if (userInput == number) {
				p.addGameWon();
				cout << "\nCongratulation you guessed right number that is " << userInput << " in " << n << " tries" <<
					"\nGame won = " << p.getGameWon() << " and game lost = " << p.getGameLost() << endl;
			}
			else if (userInput != number) {
				if (number > userInput) {
					cout << "\nWrong guess secret number is greater than your input " << userInput << endl;
				}
				else if (number < userInput) {
					cout << "\nWrong guess secret number is lower than your input " << userInput << endl;
				}
			}
			n++;
		} while ((n == 21 || userInput == number) == false);

	};

	return shouldRunGame;
}

void GameManagement::GivePlayerOptions()
{
	// assignment 10: 
	// provide the text that explains (lists) the options
	// ask user to enter the input
	cout << "Type 'n' for new game or 'q' to quit game " ;

}

void GameManagement::GetPlayerInput(string& playerInput)
{
	cin >> playerInput;
}

PlayerOptions GameManagement::EvaluatePlayerInput(const string& input)
{
	// assignment 10: check the validity and return the appropriate enum value
	if (input == "n") {
		return PlayerOptions::NewGame;
	}
	else if (input == "q") {
		return PlayerOptions::Quit;
	}
	else {
		return PlayerOptions::Unknown;
	}
	
}

Player GameManagement::GetPlayerInformation()
{
	// Get the Player username and player name from the console input
	// Create the player object and return it from the function
	string username;
	string name;
	cout << "Enter your username- ";
	cin >> username;
	cout << "Enter your name -";
	cin >> name;
	
	return Player(username,name);
}