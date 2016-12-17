/**********************************************************************************
	This class manages the King. The game ends when one of the kings are captured

**********************************************************************************/

#include "piece.h"
#include <string>

class queen : public piece
{
	queen(bool team); //queen constructor
	bool is_legal(std::string move); //checks the legality of the move

	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.
};