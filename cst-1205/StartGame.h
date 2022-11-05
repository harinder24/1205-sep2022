#pragma once
#include "GameManager.h"
void StartGameLoop()
{
	Player p1 = GameManagement::GetPlayerInformation();

	GameManagement::WelcomePlayer(p1.GetName());

	bool isPlaying = true;
	while (isPlaying)
	{
		isPlaying = GameManagement::RunGame();
	}
}