//Brayden Fuller, MyRandom.c++, 3/9/21

#include <limits.h>
#include "MyRandom.h"


//sets the seed to 
MyRandom::MyRandom(){
	a = 16807;
	m = 2147483647;
	q = m/a;
	r = m % a;
	seed = INT_MAX/2;
	
}
//sets the seed to initial
MyRandom::MyRandom(int initial){
	a = 16807;
	m = 2147483647;
	q = m/a;
	r = m % a;
	seed = initial;
}

//This creates a random number from the range 0-1
double MyRandom::RanNum(){
	int high = seed / q;
	int low = seed%q;
	int test = a * low - r * high;

	if(test > 0){
		seed = test;
	}else{
		seed = test + m;
	}
	return double(seed) / m;
}

//This takes in a low and high value and comes up with a rand num in that range
int MyRandom::RanRange(int low, int high){
	return int(((high - low) * RanNum() + low));
}
