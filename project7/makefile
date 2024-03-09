main:	main.o MyRandom.o utilities.o heapSort.o
	g++ MyRandom.o main.o utilities.o heapSort.o -o main


main.o:	main.c++ MyRandom.h heapSort.h utilities.h
	g++ -c main.c++


MyRandom.o:	MyRandom.h MyRandom.c++
		g++ -c MyRandom.c++


utilities.o:	utilities.h utilities.c++
		g++ -c utilities.c++


heapSort.o:	heapSort.h heapSort.c++ utilities.h
		g++ -c heapSort.c++



