Phony: all Units valgrind

all: Units

valgrind: build
	valgrind --leak-check=yes

Units: Piece.o Pawn.o Rook.o Bishop.o Knight.o Queen.o King.o

Piece.o:
	g++ -C Piece.cc

Pawn.o: Piece.o
	g++ -C Pawn.cc

Rook.o: Piece.o
	g++ -C Rook.cc

Bishop.o: Piece.o
	g++ -C Bishop.cc

Knight.o: Piece.o
	g++ -C Piece.cc

Queen.o: Piece.o
	g++ -C Queen.cc

King.o: Piece.o
	g++ -C King.cc