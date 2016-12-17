Phony: all units valgrind clean

all: units

valgrind: build
	valgrind --leak-check=yes

units: piece.o pawn.o rook.o  knight.o bishop.o queen.o king.o

piece.o:
	g++ -c piece.cc

pawn.o: piece.o
	g++ -c pawn.cc

rook.o: piece.o
	g++ -c rook.cc

bishop.o: piece.o
	g++ -c bishop.cc

knight.o: piece.o
	g++ -c knight.cc

queen.o: piece.o
	g++ -c queen.cc

king.o: piece.o
	g++ -c king.cc


clean:
	rm *.o