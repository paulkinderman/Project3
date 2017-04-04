run: ./TreeDr
	
all: TreeDr

TreeDr: TreeDr.o TreeType.o QueType.o
	g++ -std=c++14 -o TreeDr TreeDr.o TreeType.o QueType.o

TreeDr.o: TreeDr.cpp TreeType.h QueType.h
	g++ -c -std=c++14 TreeDr.cpp

TreeType.o: TreeType.cpp TreeType.h QueType.h
	g++ -c -std=c++14 TreeType.cpp

QueType.o: QueType.cpp QueType.h
	g++ -c -std=c++14 QueType.cpp

clean:
	rm -f *.o
	rm -f TreeDr
	rm -f *~
	rm -f *.out