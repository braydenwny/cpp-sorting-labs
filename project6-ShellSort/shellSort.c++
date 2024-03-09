//Brayden Fuller, shellSort.c++, 4/6/21

#include <math.h>
#include <iostream>
#include "shellSort.h"
#include "utilities.h"
#include "insertionSort.h"
using namespace std;

void shellSort(int nums[], int N){
	int passes = floor(log2(N));
	int increment;
	while(passes >= 1){
		increment = pow(2,passes) - 1;
		for(int i = 0; i <= increment - 1; i+= increment){
			insertionSort(nums, N, i, increment);
		}
		passes -= 1;
	}
}

//does two passes instead of 1 like the first shell sort
void shellSortTwoPasses(int nums[], int N){
	int passes = 2;
	int increment = 1.72 *sqrt(N);
	while(passes >=1){
		for(int i = 0; i <= increment -1; i += increment){
			insertionSort(nums, N, i, increment);
		}
		increment = 1;
		passes -= 1;
	}
	insertionSort(nums,N,1,1);
}
