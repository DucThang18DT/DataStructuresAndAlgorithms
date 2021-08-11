/*----------------------------------------------------------*
					    Hashing Algorithms
-*----------------------------------------------------------*
	Create   					: 	10/08/2021
	Latest Modified 	        : 	10/08/2021
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*----------------------------------------------------------*/

/*----------------------------------------------------------*
                        Description
-*----------------------------------------------------------*
    Map a list into hash table use open addressing algorithm
-*----------------------------------------------------------*/

#include <iostream>
using namespace std;
#include "HashingAlgorithm/Hashing.h"

void input(Hashtable *array, int *size){
    cout << "\nenter the length of array: ";
    cin >> *size;
    while (true){
        string num;
        cout << "\nEnter a value (enter 'q' to finish): ";
        cin >> num;
        if (num == "q") break;
        else if (!hashInsert(array, *size, stoi(num))) 
                cout << "\nHash table overflow\n";
    }
}

void output(Hashtable *array, int size){
    cout << "\n---------- Array data ---------\n";
    for (int count = 0 ; count < size; count++)
        {
            if (count % 10 == 0) cout <<"\n";
            if (array[count].isNull)
                cout<< array[count].value <<"\t";
            else cout<< "_\t"; 
        }
}

int main(int argc, char const *argv[])
{
    int size;
    Hashtable *myTable = new Hashtable;
    input(&*myTable, &size);
    output(&*myTable, size);

    while (true)
    {   
        string num;
        cout << "\nEnter the value that want to find in the hash table (enter 'q' to finish): ";
        cin >> num;
        if (num == "q") break;
        else {
            int index = hashSearch(&*myTable, size, stoi(num));
            if (index < 0) cout <<"\nThat value isn\'t in the hash table";
            else cout <<"\nIndex = "<< index; 
        }
    }
    
    delete[] myTable;
    cout << "\n";
    system("pause");
    return 0;
}
