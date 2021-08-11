#include "Hashing.h"

// Returns the position in the array of the passed value 
// @user can edit the return formula to suit their purposes
// For example, use linear probing fomula:
int mapFunction(int value, int index, int size){
    return (value % size + index) %size;
}

// Insert a value into array
bool hashInsert(Hashtable *array, int size, int value){
    int i = 0, j;
    while (i < size){
        j = mapFunction(value, i, size);
        if (!array[j].isNull){
            array[j].value = value;
            array[j].isNull = true;
            return true;
        }
        else ++i;
    }
    return false;
}

int hashSearch(Hashtable *array, int size, int value){
    int i = 0, j;
    do{
        j = mapFunction(value, i, size);
        if (array[j].value == value) return j;
        ++i;
    }while ((i < size) && array[j].isNull);
    return -1;
}