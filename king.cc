#include "king.h"
#include <string>
#include <stdlib.h>

using namespace std;

king::king(bool team1)
{
	team = team1;
	has_moved = false;
	type = "KING";
}

bool king::is_legal(char move[4], piece *board[][8])
{
	int x1, x2, y1, y2;
	char holder[4] = {'0', '0', x2, y2};
	x1 = (int)move[0] - (int)'A';
	x2 = (int)move[2] - (int)'A';
	y1 = (int)move[1] - (int)'1';
	y2 = (int)move[3] - (int)'1';

	if(board[x2][y2] -> get_type() == "SPACE" || board[x2][y2] -> get_team() != team)
	{
		if(abs(x2 - x1) <= 1 && abs(y2 - y1) <= 1)
		{
			for(int x = 0; x < 8; x++)
				for(int y =0; y < 8; y++)
				{
					holder[0] = (char)x + 'A'; holder[1] = (char)y + '1';
					if(board[x][y] -> is_legal(holder))
						return false;
				}

			return true;
		}
	}
	return false;
}