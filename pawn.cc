#include <string>
#include "pawn.h"

using namespace std;

pawn::pawn(bool team1)
{
	team = team1;
	has_moved = false;
	type = "PAWN";
}

bool pawn::is_legal(char move[4], piece *board[][8])
{
	int x1, x2, y1, y2;
	x1 = (int)move[0] - (int)'A';
	x2 = (int)move[2] - (int)'A';
	y1 = (int)move[1] - (int)'1';
	y2 = (int)move[3] - (int)'1';

	if(team == 1) //White Pawn Legality
	{
		if(x1 == x2)
		{
			if(y2 == y1 + 1 && board[x2][y2] -> type == "SPACE")
				return true;

			else if(y2 == y1 + 2 && board[x2][y2] -> type == "SPACE" && board[x2][y2 - 1] -> type == "SPACE" && has_moved == false)
				return true;

			else 
				return false;
		}

		else if((x2 == x1 + 1 || x2 == x1 - 1) && y2 == y1 + 1)
		{
			if(board[x2][y2] -> type != "SPACE")
			{
				return true;
			}
			else
				return false;
		}
	}


	if(team == 0) //Black Pawn legality
	{
		if(x1 == x2)
		{
			if(y2 == y1 - 1 && board[x2][y2] -> type == "SPACE")
				return true;

			else if(y2 == y1 - 2 && board[x2][y2] -> type == "SPACE" && board[x2][y2 + 1] -> type == "SPACE" && has_moved == false)
				return true;

			else 
				return false;
		}

		else if((x2 == x1 + 1 || x2 == x1 - 1) && y2 ==+ y1 - 1)
		{
			if(board[x2][y2] -> type != "SPACE")
			{
				return true;
			}
			else
				return false;
		}
	}

}
