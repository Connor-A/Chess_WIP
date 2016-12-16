/******************************************************************************************
	This class manages Rooks. Castling will be functional upon completion

******************************************************************************************/

#include "piece.h"
#include <string>

class rook : public piece
{
	bool team;
	bool has_moved;
	std::string type;

	rook(bool team); //rook constructor
	bool is_legal(char move[4], piece *board[][8]); //checks the legality of the move

	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.


};