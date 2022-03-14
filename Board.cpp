#define _CRT_SECURE_NO_WARNINGS
#include "Board.h"

Board::Board() :size(0),board(nullptr) {}
Board::Board(int _size):size(_size)
{
	board = new Cell[size];
}
Board::Board(const Board& sec) : size(sec.size)
{
	board = new Cell[size];
	CopyElements(sec.board);
}
Board::~Board()
{
	if(board)
		delete[] board;
}
void Board::print() const
{
	cout << "   |   |   " << endl;
	cout << " " << board[0].getter() << " | " << board[1].getter() << " | " << board[2].getter() << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << board[3].getter() << " | " << board[4].getter() << " | " << board[5].getter() << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << board[6].getter() << " | " << board[7].getter() << " | " << board[8].getter() << endl;
	cout << "   |   |   " << endl;
}
bool Board::set_symbol(int cell_num, char symbol)
{
	if (cell_num<0 || cell_num>this->size)
	{
		cout << "Exceeding the limits of the array! " << endl;
		return false;
	}
	if (symbol != 'X' && symbol != 'O') 
	{
		cout << "Invalid character, only X or O allowed! " << endl;
		return false;
	}
	if (this->board[cell_num].is_free() == false)
	{
		cout << "the cell is not available" << endl;
		return false;
	}
	this->board[cell_num].setter(symbol);
	return true;
}
int Board::count_board() const
{
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		if (this->board[i].is_free())
		{
			count++;
		}
	}
	return count;
}
char Board::get_symbol(int cell_num) const
{	
	return this->board[cell_num].getter();
}
void Board::CopyElements(Cell* _board)
{
	for (int i = 0; i < size; i++)
	{
		this->board[i] = _board[i];
	}
}


