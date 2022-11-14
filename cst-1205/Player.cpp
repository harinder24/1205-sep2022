#include "Player.h"

Player::Player()
{
}

Player::Player(const string& username, const string& name)
	: m_username(username), m_name(name)
	// initializers execute before the constructor begins executing
{
	// some code 
}

Player::~Player()
{
}

/* the second version of the above constructor without initializers list
*  the function header line
Player::Player(const string& username, const string& name)
{
	this->m_username = username;
	this->m_name = name;
}
*/

const string& Player::GetName()
{
	return this->m_name;
}

const string& Player::GetUsername()
{
	return this->m_username;
}

void Player::SetName(const string& name)
{
	this->m_name = name;
}

// Overloaded methods (functions) need to have different parameter types
void Player::SetName(const string& name, const string& lastName)
{
	this->m_name = name;
	this->m_name.append(" ");
	this->m_name.append(lastName);
}

const Player& Player::operator=(const Player& player)
{
	this->m_name = player.m_name;
	this->m_username = player.m_username;

	return *this;
}
