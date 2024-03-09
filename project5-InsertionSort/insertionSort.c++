//Brayden Fuller, insertionSort.c++, 3/29/21

#include "insertionSort.h"
#include "utilities.h"

void insertionSort(int nums[], int N){
	int newElement;
	int location;
	for(int i = 1; i < N; i++){
		newElement = nums[i];
		location = i - 1;
		while((location >= 0) && (GreaterThan(nums[location], newElement))){
			nums[location + 1] = nums[location];
			location = location -1;
		}
		nums[location +1] = newElement;
	}


}
