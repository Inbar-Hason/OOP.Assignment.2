#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Player
{
private: // Data Members 
	char* name;
	char symbol;
	Player(const Player& sec);
public: // Methods
	Player(); // Default Constructor
	Player(char* _name, char _symbol); // Constructor
	~Player(); // destractor
	void print() const; // print function
	void set_name(char* _name); // set_name function
	void set_symbol(char _symbol); //set_symbol function
	char* get_name()const; //get_name function
	char get_symbol()const; //get_symbol function
	int make_move(int move)const; //make_move function
};

