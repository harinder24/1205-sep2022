#pragma once
#include <iostream>

using namespace std;

class Player
{
private:
	string m_username;
	string m_name;
	int gameWon;
	int gameLost;

public:
	Player();
	~Player();
	Player(const string& username, const string& name);
	const string& GetName();
	const string& GetUsername();
	void SetName(const string& name);
	void SetName(const string& name, const string& lastName);
	const Player& operator=(const Player& player);
	void setGameWon() {
		this->gameWon = 0;
	}
	void setGameLost() {
		this->gameLost = 0;
	}
	void addGameWon() {
		this->gameWon += 1;
	}
	void addGameLost() {
		this->gameLost += 1;
	}
	int getGameWon() {
		return gameWon;
	}
	int getGameLost() {
		return gameLost;
	}
};