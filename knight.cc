#include "knight.h"
#include <string>

using namespace std;

knight::knight(bool team1)
{
	team = team1;
	has_moved = false;
	type = "KNIGHT";
}

bool knight::is_legal(char move[4], piece *board[][8])
{
	int x1, x2, y1, y2;
	x1 = (int)move[0] - (int)'A';
	x2 = (int)move[2] - (int)'A';
	y1 = (int)move[1] - (int)'1';
	y2 = (int)move[3] - (int)'1';

	if(board[x2][y2] -> get_type() == "SPACE" || board[x2][y2] -> get_team() != team)
	{
		if((y2 == y1 + 2 || y2 == y1 - 2) && (x2 == x1 - 1 || x2 == x1 + 1))
			return true;
		else if((x2 == x1 + 2 || x2 == x1 -2) && (y2 == y1 + 1 || y2 == y1 - 1))
			return true;
	}
	else
		return false;
}
