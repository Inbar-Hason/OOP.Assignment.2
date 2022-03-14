#define _CRT_SECURE_NO_WARNINGS
#include "Board.h"
#include "Player.h"

class Game
{
private: // Data Members 
	Board board;
	Player players[2];
	enum statuses { win, draw, start };
	statuses status;
	char turn;
public: // Methods
	Game(char* name1, char* name2); // Constructor
	char set_turn() const; // set_turn function
	void play(); // play function
	void move_player(int num_player); // move_player function
	bool is_win() const; // is_win function
	bool test_win(int x, int y, int z) const; //test_win function
};

