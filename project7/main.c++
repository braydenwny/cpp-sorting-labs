//Brayden Fuller, main.c++, 3/30/21

#include <iostream>
#include <limits.h>
#include "MyRandom.h"
#include "heapSort.h"
#include "utilities.h"
using namespace std;

int comparisonCount;

int main(){
	MyRandom ran;
	comparisonCount = 0;
	int nums20[20];

//This for loop sets up a list with ran numbers from 1-1000
	for(int i = 0; i < 20; i ++){
		nums20[i] = ran.RanRange(1, 10000);
	}

	heapSort(nums20, 20);
	if(CheckList(nums20, 20)){
		cout<< "Heap sort list 1 is sorted" << endl;
		for(int i = 0; i < 20; i ++){
			cout<< nums20[i] << ",";
		}
		cout <<  endl;
	}else {
		cout << "List 1 is not sorted" << endl;
		for(int i = 0; i <20; i ++){
			cout << nums20[i] << ",";
		}
		cout << endl;
	}




	int nums50Thousand[50000];
	comparisonCount = 0;
//This for loop sets up an array of values from 1-50000
	for(int i = 0; i < 50000; i++){
		nums50Thousand[i] = ran.RanRange(1, INT_MAX);
	}
		
	heapSort(nums50Thousand, 50000);

	if(CheckList(nums50Thousand, 50000)){
		cout<< "Heap Sort list 2 is sorted with " << comparisonCount << " Comparisons" << endl;
	}else{
		cout<< "List2 isn't sorted." << endl;
	}

}
