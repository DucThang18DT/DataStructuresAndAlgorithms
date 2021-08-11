#include "InsertionSort.h"
#include <iostream>

void insertionSort(int* array, int size, Direction direction = Direction::S2L){
    std::cout << "\nsize: "<<size<< std::endl;
    switch (direction)
    {
    case Direction::S2L:
        for (int i = 1; i < size; i++){
            int value = array[i];
            int j = i-1;
            while ((j >=0) && (array[j] > value)){
                array[j+1] = array[j];
                --j;
            }
            array[j+1] = value;
        }
    break;
    case Direction::L2S:
        for (int i = 1; i < size; i++){
            int value = array[i];
            int j = i-1;
            while ((j >=0) && (array[j] < value)){
                array[j+1] = array[j];
                --j;
            }
            array[j+1] = value;
        }
        break;
    }

    
}