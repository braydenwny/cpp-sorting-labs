//Brayden Fuller, CheckList.c++, 3/30/21

#include "utilities.h"
#include <iostream>
using namespace std;

extern int comparisonCount;

bool CheckList(int nums[], int size){
	for(int i = 1; i < size; i ++){
		if(nums[i] < nums[i - 1]){
			cout << nums[i-1]  << "," << nums[i] << endl;
			return false;
		}
	}
	return true;
}

bool GreaterThan(int num1, int num2){
	comparisonCount +=1;
	return num1 > num2;
}
