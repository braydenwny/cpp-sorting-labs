//Brayden Fuller, heapSort.c++, 4/13/21

#include <iostream>
#include "heapSort.h"
#include "utilities.h"
using namespace std;

void FixHeap(int nums[], int root, int key, int bound){
	int vacant = root;
	int largerChild;
	while (2 * vacant + 1 < bound){
		largerChild = 2 * vacant + 1;
		//find the larger of the 2 children
		if((largerChild < bound) && (GreaterThan(nums[largerChild + 1], nums[largerChild]))){
			largerChild += 1;
		}
		//does the key belong to the child
		if(GreaterThan(key, nums[largerChild])){
			break;	//yes stop looping
		} else{
			nums[vacant] = nums[largerChild];	//No, move the larger child up
			vacant = largerChild;
		}
	}
	nums[vacant] = key;
}

void heapSort(int nums[], int N){
	for(int i = N/2; i >= 0; i--){
		FixHeap(nums, i, nums[i], N);
		
	}
	int max;
	for(int i = N - 1; i >= 1; i--){
		max = nums[0];
		FixHeap(nums, 0, nums[i], i);
		nums[i] = max;
	}
}
