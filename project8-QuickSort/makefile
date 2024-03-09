main:	main.o MyRandom.o utilities.o quickSort.o
	g++ MyRandom.o main.o utilities.o quickSort.o -o main


main.o:	main.c++ MyRandom.h quickSort.h utilities.h
	g++ -c main.c++


MyRandom.o:	MyRandom.h MyRandom.c++
		g++ -c MyRandom.c++


utilities.o:	utilities.h utilities.c++
		g++ -c utilities.c++


quickSort.o:	quickSort.h quickSort.c++ utilities.h
		g++ -c quickSort.c++



