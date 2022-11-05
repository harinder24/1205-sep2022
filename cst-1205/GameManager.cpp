#include <iostream>
#include "GameManager.h"
#include <string>

using namespace std;

void GameManagement::WelcomePlayer(const string& name)
{
	cout << "Welcome back " << name << " !" << endl;
}

bool GameManagement::RunGame()
{
	GameManagement::GivePlayerOptions();
	string playerInput;
	GameManagement::GetPlayerInput(playerInput);

	bool shouldRunGame = EvaluatePlayerInput(playerInput) != PlayerOptions::Quit;


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