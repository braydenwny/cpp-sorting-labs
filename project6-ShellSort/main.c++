//Brayden Fuller, main.c++, 3/30/21

#include <iostream>
#include <limits.h>
#include "MyRandom.h"
#include "insertionSort.h"
#include "utilities.h"
#include "shellSort.h"
using namespace std;

int comparisonCount;

int main(){
	MyRandom ran;
	comparisonCount = 0;
	int nums20[20];
	int nums20Dupe[20];
	int nums20Dupe2[20];
//This for loop sets up a list with ran numbers from 1-10000
	for(int i = 0; i < 20; i ++){
		nums20[i] = ran.RanRange(1, 10000);
		nums20Dupe[i] = nums20[i];
		nums20Dupe2[i] = nums20[i];
	}

	//Tests insertion sort algorithm
	insertionSort(nums20, 20,1,1);
	if(CheckList(nums20, 20)){
		cout<< "Insertion sort list 1 is sorted" << endl;
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

	//Testing shell sort algo 1
	shellSort(nums20Dupe, 20);
	cout << "shell sort complete." << endl;
	if(CheckList(nums20Dupe, 20)){
		cout << "Shell sort list 1 is sorted" << endl;
		for(int i = 0; i <20; i ++){
			cout<< nums20Dupe[i] << ",";
		}
		cout << endl;
	}else{
		cout << "Shell sort list 1 is not sorted" << endl;
		for(int i = 0; i < 20; i ++){
			cout << nums20Dupe[i] << ",";
		}
		cout << endl;
	}
	
	//Testing shell sort algo 2
	shellSortTwoPasses(nums20Dupe2, 20);
	if(CheckList(nums20Dupe2, 20)){
		cout <<"Shell sort algo 2 list 1 is sorted" << endl;
		for(int i = 0; i < 20; i++){
			cout << nums20Dupe2[i] << ",";
		}
		cout << endl;
	}else{
		cout << "Shell sort algo 2 list 1 is not sorted" << endl;
	}


	//lists of 50000 nums
	int nums50Thousand[50000];
	int nums50ThousandDupe[50000];
	int nums50ThousandDupe2[50000];
	comparisonCount = 0;
//This for loop sets up an array of values from 1-50000
	for(int i = 0; i < 50000; i++){
		nums50Thousand[i] = ran.RanRange(1, INT_MAX);
		nums50ThousandDupe[i] = nums50Thousand[i];
		nums50ThousandDupe2[i] = nums50Thousand[i];
	}
	
	//Testing insertionSort
	insertionSort(nums50Thousand, 50000, 1, 1);

	if(CheckList(nums50Thousand, 50000)){
		cout<< "Insertion Sort list 2 is sorted with " << comparisonCount << " Comparisons " << endl;
	}else{
		cout<< "List2 isn't sorted." << endl;
	}
	
	int insertCompCount = comparisonCount;	//temp var for comparisonCount of insertion sort
	comparisonCount = 0;	
	
	//Testing shellsort algo 1
	shellSort(nums50ThousandDupe, 50000);
	int shellComparisons = comparisonCount;
	if(CheckList(nums50Thousand, 50000)){
		cout << "Shell sort algo 1 list 2 is sorted with " << comparisonCount << " Comparisons" << endl;
	}else{
		cout << "Shell sort algo 1 list 2 isn't sorted" << endl;
	}
	comparisonCount = 0;	

	//Testing shellsort algo 2
	shellSortTwoPasses(nums50ThousandDupe2,50000);
	int shellComparisonsAlgo2 = comparisonCount;

	if(CheckList(nums50ThousandDupe, 50000)){
		cout << "Shell Sort Algorithm 2 list is sorted with " << comparisonCount << " Comparisons " << endl;
	}else{
		cout << "Shell Sort Algorithm 2 list isn't sorted." << endl;
	}

}
