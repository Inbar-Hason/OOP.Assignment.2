#define _CRT_SECURE_NO_WARNINGS
#include "Player.h"

Player::Player() : name(nullptr), symbol(' ') { }

Player::Player(char* _name, char _symbol) : symbol(_symbol)
{
	int x = strlen(_name);
	name = new char[x + 1];
	strcpy(name,_name);
}
Player::Player(const Player& sec) : symbol(sec.symbol)
{
	int x = strlen(sec.name);
	name = new char[x + 1];
	strcpy(name, sec.name);
}
Player::~Player()
{
	if (name)
		delete[] name;
}
void Player::print() const
{
	cout << "The name of the player: " << this->name << endl;
	cout << "The symbol of the player: " << this->symbol << endl;
}
void Player::set_name(char* _name)
{
	int x = strlen(_name);
	this->name = new char[x + 1];
	strcpy(this->name, _name);
}
void Player::set_symbol(char _symbol)
{
	this->symbol = _symbol;
}
char* Player::get_name() const
{
	return this->name;
}
char Player::get_symbol() const
{
	return this->symbol;
}
int Player::make_move(int move) const
{
	return move - 1;
}