//Brayden Fuller, insertionSort.c++, 3/29/21

#include "insertionSort.h"
#include "utilities.h"

void insertionSort(int nums[], int N, int start, int increment){
	int newElement;
	int location;
	for(int i = start; i < N; i+= increment){
		newElement = nums[i];
		location = i - increment;
		while((location >= 0) && (GreaterThan(nums[location], newElement))){
			nums[location + increment] = nums[location];
			location = location - increment;
		}
		nums[location + increment] = newElement;
	}


}
