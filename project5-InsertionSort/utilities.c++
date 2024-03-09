//Brayden Fuller, CheckList.c++, 3/30/21   

#include "utilities.h"

extern int comparisonCount;

bool CheckList(int nums[], int size){
	for(int i = 1; i < size; i ++){
		if(nums[i] < nums[i - 1]){
			return false;
		}
	}
	return true;
}

bool GreaterThan(int num1, int num2){
	comparisonCount +=1;
	return num1 > num2;
}
