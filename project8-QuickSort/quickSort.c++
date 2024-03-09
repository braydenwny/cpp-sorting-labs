//Brayden Fuller, quickSort.c++, 4/25/21

#include <iostream>
#include "quickSort.h"
#include "utilities.h"
using namespace std;


void quickSortOne(int nums[], int first, int last){
	int pivot;
	if(first < last){
		pivot = PivotListOne(nums, first, last);
		quickSortOne(nums, first, pivot - 1);
		quickSortOne(nums, pivot + 1, last);
	}
}

void quickSortTwo(int nums[], int first, int last){
	int pivot;
	if(first < last){
		pivot = PivotListTwo(nums, first, last);
		quickSortTwo(nums, first, pivot -1);
		quickSortTwo(nums, pivot + 1, last);	
	}
}

int PivotListOne(int nums[], int first, int last){
	int pivotValue = nums[first];
	int pivotPoint = first;
	for(int i = first + 1; i <= last; i++){
		if(GreaterThan(pivotValue, nums[i])){
			pivotPoint = pivotPoint + 1;
			Swap(nums[pivotPoint], nums[i]);
		}
	}
	//move pivot value into correct place
	Swap(nums[first], nums[pivotPoint]);
	return pivotPoint;
}


int PivotListTwo(int nums[], int first, int last){
	int pivotValue = nums[first];
	int lower = first;
	int upper = last + 1;
	do{
		do{
			upper -= 1;
		}while(GreaterThan(nums[upper], pivotValue));
		
		do{
			lower += 1;
		}while(GreaterThan(pivotValue, nums[lower]));
		Swap(nums[upper], nums[lower]);
	}while(lower < upper);
	
	//undo the extra exchange
	Swap(nums[upper], nums[lower]);
	
	//move the pivot point into correct place
	Swap(nums[first], nums[upper]);
	
	return upper;
}
