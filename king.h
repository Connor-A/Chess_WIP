/**********************************************************************************
	This class manages the King. The game ends when one of the kings are captured

**********************************************************************************/

#include <Piece.h>
#include <string>

class queen : public piece
{
	bool team;
	bool has_moved;
	std::string type;

	queen(bool team); //queen constructor
	bool is_legal(std::string move); //checks the legality of the move
	bool make_move(std::string move); //makes the move, and changes the board state


	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.


}