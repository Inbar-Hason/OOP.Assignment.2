#define _CRT_SECURE_NO_WARNINGS
#include "Cell.h"

class Board
{
private: // Data Members 
	Cell* board;
	int size;
public: // Methods
	Board(); // Default Constructor
	Board(int _size); // Constructor
	Board(const Board& sec); // copy Constructor
	~Board(); // destractor
	void print()const; // print function
	bool set_symbol(int cell_num, char symbol); //set_symbol function
	int count_board()const; // count_board function
	char get_symbol(int cell_num)const; // get_symbol function
	void CopyElements(Cell* _board); //coping of elements
};