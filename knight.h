/**********************************************************************************
	This class manages Knights.

**********************************************************************************/

#include "piece.h"
#include <string>

class knight : public piece
{
	bool team;
	bool has_moved;
	std::string type;

	knight(bool team); //knight constructor
	bool is_legal(char move[4], piece *board[][8]); //checks the legality of the move

	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.


};