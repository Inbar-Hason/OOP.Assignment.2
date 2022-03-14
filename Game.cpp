#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include <random>

Game::Game(char* name1, char* name2) : board(9)
{
	players[0].set_name(name1);
	players[1].set_name(name2);
	players[0].set_symbol('X');
	players[1].set_symbol('O');
	status = start;
	turn = set_turn();
}
void Game::play()
{
	system("cls");
	while (status == start)
	{
		if (turn == 'X')
		{
			move_player(0);
		}
		else 
		{
			move_player(1);
		}
		if (is_win())
		{
			status = win;
			system("cls");
			board.print();
			cout << "we have a winner: " << endl;
			if (turn == players[0].get_symbol())
			{
				players[0].print();
			}
			else
			{
				players[1].print();
			}
		}
		else if (board.count_board() == 0)
		{
			status = draw;
			system("cls");
			board.print();
			cout << "It is a Draw " << endl;
		}
		if (turn == 'O')
		{
			turn = 'X';
		}
		else
		{
			turn = 'O';
		}
	}
}
char Game::set_turn() const
{
	srand(time(nullptr));
	int x = rand() % 2;
	if (x == 0)
	{
		return 'X';
	}
	else if(x == 1)
	{
		return 'O';
	}
}
void Game::move_player(int num_player)
{
	int move;
	system("cls");
	board.print();
	cout << "choose your move: (1-9)" << endl;
	cout << "Player name: " << players[num_player].get_name() << " with symbol: " << players[num_player].get_symbol() << endl;
	cin >> move;
	while (move < 1 || move>9)
	{
		cout << "Try again ! (1-9)" << endl;
		cin >> move;
	}
	system("cls");
	move = players[num_player].make_move(move);
	bool test;
	do {
		test = board.set_symbol(move, players[num_player].get_symbol());
		if (!test)
		{
			system("cls");
			board.print();
			cout << "Try again!" << endl;
			cout << "choose your move: (1-9)" << endl;
			cout << "Player name: " << players[num_player].get_name() << " with symbol: " << players[num_player].get_symbol() << endl;
			cin >> move;
			move = players[num_player].make_move(move);
			system("cls");
		}
	} while (!test);
}
bool Game::test_win(int x, int y, int z) const
{
	if (board.get_symbol(x) == ' ') // even if just one of the prameter equle to ' ' //
	{
		return false;
	}
	if (board.get_symbol(x) == board.get_symbol(y) && board.get_symbol(y) == board.get_symbol(z))
	{
		return true;
	}
	return false;
}
bool Game::is_win() const
{
	if (test_win(0, 1, 2)) { return true; } 
	if (test_win(3, 4, 5)) { return true; }
	if (test_win(6, 7, 8)) { return true; }
	if (test_win(0, 3, 6)) { return true; }
	if (test_win(1, 4, 7)) { return true; }
	if (test_win(2, 5, 8)) { return true; }
	if (test_win(0, 4, 8)) { return true; }
	if (test_win(2, 4, 6)) { return true; }

	return false;
}
