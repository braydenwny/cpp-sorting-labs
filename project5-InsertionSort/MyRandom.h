//Brayden Fuller, MyRandom.h, 3/9/21

#ifndef MyRandom_h
#define MyRandom_h

class MyRandom{

	public:
		//initialize with a seed of INT_MAX/2
		MyRandom();

		//initialize with a seed of initial
		MyRandom(int initial);

		//generate a random num in the range from 0 to 1
		double RanNum();

		//generate a random num in the range from low to high	
		int RanRange(int low, int high);

	private:
		int a, m, q, r;
		int seed;
};
#endif
