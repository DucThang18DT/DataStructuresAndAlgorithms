#ifndef _HEAP_H_
#define _HEAP_H_

    // Bring a element to its correct position in the heap
    void heapify(int *, int, int);

    // Build a heap from an any array
    void buildHeap(int *, int);

    // Convert a heap to a sorted array from smallest to largest
    void heapSort(int *, int);

#endif