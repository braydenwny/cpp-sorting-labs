//Brayden Fuller, main.c++, 3/30/21

#include <iostream>
#include <limits.h>
#include "MyRandom.h"
#include "quickSort.h"
#include "utilities.h"
using namespace std;

int comparisonCount;
int swapCount;
int main(){
	MyRandom ran;
	comparisonCount = 0;
	swapCount = 0;
	int nums20[20];
	int nums20Dupe[20];

//This for loop sets up a list with ran numbers from 1-1000
	for(int i = 0; i < 20; i ++){
		nums20[i] = ran.RanRange(1, 10000);
		nums20Dupe[i] = nums20[i];
	}
	

	//Sorts nums20 with quickSortOne

	quickSortOne(nums20, 0, 19);
	if(CheckList(nums20, 20)){
		cout<< "QuickSortOne list 1 is sorted" << endl;
		for(int i = 0; i < 20; i ++){
			cout<< nums20[i] << ",";
		}
		cout <<  endl;
	}else {
		cout << "QuickSortOne list 1 is not sorted" << endl;
		for(int i = 0; i <20; i ++){
			cout << nums20[i] << ",";
		}
		cout << endl;
	}

	//Sorts nums20Dupe with quickSortTwo
	
	quickSortTwo(nums20Dupe, 0, 19);
	 cout << "Activated quicksort2" << endl;
	if(CheckList(nums20Dupe, 20)){
		cout << "QuickSortTwo list 1 is sorted" << endl;
		for(int i = 0; i < 20; i ++){
			cout << nums20Dupe[i] << ",";
		}
		cout << endl;
	} else{
		cout << "QuickSortTwo list 1 is not sorted" << endl;
		for(int i = 0; i < 20; i ++){
			cout << nums20Dupe[i] << ",";
		}
		cout << endl;
	}



	int nums50Thousand[50000];
	int nums50ThousandDupe[50000];
	comparisonCount = 0;
	swapCount = 0;		//since swap is used even when not used in main it has to be reset before each sort that we want to check it at
//This for loop sets up an array of values from 1-50000
	for(int i = 0; i < 50000; i++){
		nums50Thousand[i] = ran.RanRange(1, INT_MAX);
		nums50ThousandDupe[i] = nums50Thousand[i];
	}
		
	quickSortOne(nums50Thousand, 0, 50000);

	if(CheckList(nums50Thousand, 50000)){
		cout<< "QuickSortOne list 2 is sorted with " << comparisonCount << " Comparisons and " << swapCount << " swaps" << endl;
	}else{
		cout<< "QuickSortOne list2 isn't sorted." << endl;
	}
	
	comparisonCount = 0;
	swapCount = 0;
	quickSortTwo(nums50ThousandDupe, 0, 50000);

	if(CheckList(nums50ThousandDupe, 50000)){
		cout << "QuickSortTwo list 2 is sorted with " << comparisonCount << " Comparisons and " << swapCount << " swaps" << endl;
	}else{
		cout << "QuickSortTwo list2 isn't sorted." << endl;
	}

}
