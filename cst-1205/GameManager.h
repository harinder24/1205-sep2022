#pragma once 
#include <iostream>
#include "PlayerOption.h"
#include "Player.h"

using namespace std;

namespace GameManagement
{
	Player GetPlayerInformation();
	void WelcomePlayer(const string& name);
	void GivePlayerOptions();
	void GetPlayerInput(string& playerInput);
	PlayerOptions EvaluatePlayerInput(const string& input);
	bool RunGame();
}