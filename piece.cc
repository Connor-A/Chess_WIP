#include <string>
#include <iostream>
#include "piece.h"

using namespace std;

piece::piece()
{
	team = NULL;
	has_moved = NULL;
	type = "SPACE";
}

void make_move(string move, piece *board[][8])
{
	int x1, x2, y1, y2;
	x1 = (int)move[0] - (int)'A';
	x2 = (int)move[2] - (int)'A';
	y1 = (int)move[1] - (int)'1';
	y2 = (int)move[3] - (int)'1';

	delete board[x2][y2];
	board[x2][y2] = board[y1][y2];
	delete board[x1][y1];
	board[x1][y1] = new piece;
	cout << board[x1][y1] -> get_type();

	return;
}