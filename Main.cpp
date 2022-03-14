#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include <iostream>
using namespace std;

int main()
{
	char name1[60], name2[60];
	cout << "enter the first name: " << endl;
	cin >> name1;
	cout << "enter the second name: " << endl;
	cin >> name2;
	Game game(name1, name2);
	game.play();
	return 0;
}

//--------------------------------------------//
	//cout << "CLASS: Cell" << endl;
	//Cell c1;
	//c1.print();
	//c1.setter('X');
	//c1.print();
	//cout << c1.getter() << endl;
	//c1.is_free();
//--------------------------------------------//
	//cout << "CLASS: Board" << endl;
	//Board b1;
	//Board b2(9);
	//Board b3 = b2;
	//b2.print();
//--------------------------------------------//
	//cout << "CLASS: Player" << endl;
	//Player p1;
	//char name[6] = "inbar";
	//Player b2(name, 'X');
	//b2.print();
	//char name2[5] = "jeny";
	//b2.set_name(name2);
	//b2.print();
//--------------------------------------------//
