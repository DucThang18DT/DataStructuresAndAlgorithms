/*----------------------------------------------------------*
					    Heap Algorithms
-*----------------------------------------------------------*
	Create   					: 	10/08/2021
	Latest Modified 	        : 	10/08/2021
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*----------------------------------------------------------*/


/*----------------------------------------------------------*
                        Description
-*----------------------------------------------------------*
    Build a heap from an array use Heapify.
    Convert a heap to a sorted array from smallest to largest
    use HeapSort.
-*----------------------------------------------------------*/

#include <iostream>
using namespace std;
#include "HeapAlgorithms/Heap.h"

void input(int *array, int *size){
    cout << "\nenter the length of array: ";
    cin >> *size;
    for (int count = 1; count <= *size; count++){
        cout << "enter the Array["<<count <<"] : ";
        cin >> array[count];
    }
}

void output(int *array, int size){
    cout << "\n---------- Array data ---------\n";
    for (int count = 1 ; count <= size; count++)
        {
            if (count % 10 == 0) cout <<"\n";
            cout<< array[count] <<"\t";
        }
}

int main(int argc, char const *argv[])
{
    int size;
    int *myArray = new int;
    input(&*myArray, &size);

    cout << "\nBuild Heap: \n";
    buildHeap(&*myArray, size);
    output(&*myArray, size);

    cout << "\nHeap Sort: \n";
    heapSort(&*myArray, size);
    output(&*myArray, size);

    delete[] myArray;
    cout << "\n";
    system("pause");
    return 0;
}
