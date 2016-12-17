#include "bishop.h"
#include <string>
#include <stdlib.h>

using namespace std;

bishop::bishop(bool team1)
{
	team = team1;
	has_moved = false;
	type = "BISHOP";
}

bool bishop::is_legal(char move[4], piece *board[][8])
{
	int x1, x2, y1, y2;
	x1 = (int)move[0] - (int)'A';
	x2 = (int)move[2] - (int)'A';
	y1 = (int)move[1] - (int)'1';
	y2 = (int)move[3] - (int)'1';

	if(board[x2][y2] -> get_type() == "SPACE" || board[x2][y2] -> get_team() != team)
	{
		if(abs(x1 - x2) == abs(y1 - y2))
		{
			if(x2 > x1)
			{
				if(y2 > y1)
				{
					for(int z = 1; z < x2 - x1; z++)
						if(board[x1 + z][y1 + z] -> get_type() != "SPACE")
							return false;

					return true;
				}
				
				else if(y2 < y1)
				{
					for(int z = 1; z < x2 - x1; z++)
						if(board[x1 + z][y1 - z] -> get_type() != "SPACE")
							return false;

					return true;
				}

			}
			else if(x2 < x1)
			{
				if(y2 > y1)
				{
					for(int z = 1; z < x1 - x2; z++)
						if(board[x1 - z][y1 + z] -> get_type() != "SPACE")
							return false;

					return true;
				}
				
				else if(y2 < y1)
				{
					for(int z = 1; z < x1 - x2; z++)
						if(board[x1 - z][y1 - z] -> get_type() != "SPACE")
							return false;

					return true;
				}
			}
		}
	}
	return false;
}
