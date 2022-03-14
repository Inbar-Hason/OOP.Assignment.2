#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Cell
{
private: // Data Members 
	char cell;
	bool free;
public: // Methods
	Cell(); // Default Constructor
	void print()const; // print function
	void setter(char symbol); // setter function
	char getter()const; // getter function
	bool is_free()const; // is_free function
};