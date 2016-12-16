/****************************************************************************************************************
	This is the parent class for all the pieces of the chess board. It will be usre in a two 
	dimensional array to simulate the board, and the pieces will be saved by passing them into the board array
	via polymorphism.
*****************************************************************************************************************/

#include <string>


class piece
{
	protected:
		bool team; // black == 0 white == 1
		bool has_moved;
		//bool color; //Color of the space black == 0, white == 1
		std::string type;

	public:
		piece(); //piece constructor
		virtual void is_legal(std::string move){} //checks the legality of the move
		void make_move(std::string move); //makes the move, and changes the board state
		
		std::string get_type(){return type;}
		bool get_team(){return team;}
		
		void set_type(std::string new_type){type = new_type; return;}

		//legal_moves(); A function that detects available moves for a piece
		//guardian(); returns pieces that are protected by this piece
		//damsel(); returns pieces that protect this piece. This may be inefficient.

};