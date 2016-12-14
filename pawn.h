/*********************************************************************************************************
	This is the class that manages pawns. 2 spave movement and enpassant will be functional functional.

**********************************************************************************************************/

#include "piece.h"
#include <string>

class pawn : public piece
{
	public:
		pawn(bool team); //pawn constructor
		bool is_legal(char move[4], piece *board[][8]); //checks the legality of the move


		//legal_moves(); A function that detects available moves for a piece
		//guardian(); returns pieces that are protected by this piece
		//damsel(); returns pieces that protect this piece. This may be inefficient.
};