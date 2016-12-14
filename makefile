Phony: all Units valgrind clean

all: Units

valgrind: build
	valgrind --leak-check=yes

Units: piece.o pawn.o rook.o bishop.o knight.o queen.o king.o

piece.o:
	g++ -c piece.cc

pawn.o: piece.o
	g++ -c pawn.cc

rook.o: piece.o
	g++ -c rook.cc

bishop.o: piece.o
	g++ -c bishop.cc

knight.o: piece.o
	g++ -c piece.cc

queen.o: piece.o
	g++ -c queen.cc

king.o: piece.o
	g++ -c king.cc


clean:
	rm *.o