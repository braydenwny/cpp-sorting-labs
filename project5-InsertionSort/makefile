main:	main.o MyRandom.o utilities.o insertionSort.o
	g++ MyRandom.o main.o utilities.o insertionSort.o -o main


main.o:	main.c++ MyRandom.h insertionSort.h utilities.h
	g++ -c main.c++


MyRandom.o:	MyRandom.h MyRandom.c++
		g++ -c MyRandom.c++


utilities.o:	utilities.h utilities.c++
		g++ -c utilities.c++


insertionSort.o:	insertionSort.h insertionSort.c++ utilities.h
		g++ -c insertionSort.c++


