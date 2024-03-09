//Brayden Fuller, heapSort.h, 4/13/21

#ifndef heapSort_h
#define heapSort_h

//FixHeap algorithim from pg 100 of the textbook
void FixHeap(int nums[], int root, int key, int bound);

//nums[] is the list/heap being sorted
//root is the index of the root of the heap
//key is the key value that needs to be reinserted in the heap
//bound is the upper limit(index) on the heap

//heapSort algorithm from page 102 of the textbook
void heapSort(int nums[], int N);

//nums[] is the list/heap
//N is the length of the list

#endif
