#include "Heap.h"
#include <iostream>
using namespace std;

// swap position of 2 integers 
void _swap(int *numA, int *numB)
{
    int _temporary = *numA;
    *numA = *numB;
    *numB = _temporary;
}

void heapify(int *array, int size, int index){
    int max, left = 2*index, right = 2*index +1;
    if ((left <= size) && (array[left] > array[index])) max = left;
    else max = index;
    if ((right <= size) && (array[right] > array[max])) max = right;
    
    if (max != index){
        _swap(&array[index], &array[max]);
        heapify(array, size, max);
    }
}

void buildHeap(int *array, int size){
    for (int i = size/2; i>=1; i--) heapify(array, size, i);
}

void heapSort(int *array, int size){
    buildHeap(array, size);
    for (int i = size; i >= 1; i--){
        _swap(&array[i],&array[1]);
        heapify(array, i-1, 1);
    }
}