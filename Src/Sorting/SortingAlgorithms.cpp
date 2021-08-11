/*----------------------------------------------------------*
					    Sorting Algorithms
-*----------------------------------------------------------*
	Create   					: 	01/08/2021
	Lastest Modified 	        : 	10/08/2021
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*----------------------------------------------------------*/


/*----------------------------------------------------------*
                        Description
-*----------------------------------------------------------*
    Used to call functions in libraries:
        1. bubbleSort       - lib: BubbleSort
        2. quickSort        - lib: QuickSort 
        3. insertionSort    - lib: InsertionSort
-*----------------------------------------------------------*/

#include <iostream>
#include "BubbleSort/BubbleSort.h"
#include "quickSort/QuickSort.h"
#include "InsertionSort/InsertionSort.h"
#include "Material.h"

using namespace std;

void input(int *array, int *size){
    cout << "\nenter the length of array: ";
    cin >> *size;
    for (int count = 0; count < *size; count++){
        cout << "enter the Array["<<count <<"] : ";
        cin >> array[count];
    }
}

void output(int *array, int size){
    cout << "\n---------- Array data ---------\n";
    for (int count = 0 ; count < size; count++)
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

    bool isQuit = false;
    while (!isQuit){
        cout << "\nEnter a number to select sort algorithm: ";
        cout << "\n1. Bubble Sort\n2. Quick Sort\n3. Insertion Sort\nEnter 0 to quit.\n";
        int type;
        cin >> type;
        int direc;
        if (type){
            cout << "\nenter a number to select direction: ";
            cout << "\n1. Small to large\n2. Large ro small\n";
            cin >> direc;
        }
         // Sorting
        switch (type)
        {
        case 1:
            bubbleSort(&*myArray, size, (direc == 1)? Direction::S2L : Direction::L2S);
            break;
        case 2:
            quickSort(&*myArray, 0, size-1, (direc == 1)? Direction::S2L : Direction::L2S);
            break;
        case 3:
            insertionSort(&*myArray, size, (direc == 1)? Direction::S2L : Direction::L2S);
            break;
        case 0:
            isQuit = true;
        }
        if (!isQuit) {
            output(myArray, size);
            cout<<"\n";
            system("pause");
            system("cls");}
        
    }
    
    delete[] myArray;

    cout<<"\n";
    system("pause");
    return 0;
}

/*----------------------------------------------------------*
-*------------------------ End File ------------------------*
-*----------------------------------------------------------*/