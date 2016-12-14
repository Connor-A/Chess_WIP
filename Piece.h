/****************************************************************************************************************
	This is the parent class for all the pieces of the chess board. It will be usre in a two 
	dimensional array to simulate the board, and the pieces will be saved by passing them into the board array
	via polymorphism.
*****************************************************************************************************************/

#include <string>


class piece
{
	bool team;
	bool has_moved;
	std::string type;

	piece(); //piece constructor
	bool is_legal(std::string move); //checks the legality of the move
	bool make_move(std::string move); //makes the move, and changes the board state


	//legal_moves(); A function that detects available moves for a piece
	//guardian(); returns pieces that are protected by this piece
	//damsel(); returns pieces that protect this piece. This may be inefficient.


}