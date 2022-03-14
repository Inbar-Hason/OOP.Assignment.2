#define _CRT_SECURE_NO_WARNINGS
#include "Cell.h"
Cell::Cell(): cell(' '),free(true){}
void Cell::print() const
{
	cout << this->cell << endl;
}
void Cell::setter(char symbol) 
{
	this->cell = symbol;
	this->free = false;
}
char Cell::getter() const
{
	return this->cell;
}
bool Cell::is_free() const
{
	if(this->free == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}
