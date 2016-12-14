/*********************************************************************************************************
	This is the class that manages pawns. 2 spave movement and enpassant will be functional functional.

**********************************************************************************************************/

#include <"Piece.h">
#include <string>

class pawn : public piece
{
	bool team;
	bool has_moved;
	std::string type;

	pawn(bool team); //pawn constructor
	bool is_legal(std::string move); //checks the legality of the move
	bool make_move(std::string move); //makes the move, and changes the board state


	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.


}