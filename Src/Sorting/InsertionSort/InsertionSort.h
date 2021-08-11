#ifndef _INSERTIONSORT_H_
#define _INSERTIONSORT_H_

    #include "../Material.h"
    // direction of sortting
    // S2L : small to large
    // L2S : large to small
    // enum IDirection{S2L, L2S};

    // sort array of inergers 
    void insertionSort(int*, int, Direction);

    // sort array of floats
    void insertionSort(float *, int, Direction);
#endif