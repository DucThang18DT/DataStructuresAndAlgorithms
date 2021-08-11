/*----------------------------------------------------------*
					    BubbleSort
-*----------------------------------------------------------*
	Create   					: 	01/08/2021
	Latest Modified 	        : 	01/08/2021
	By      					: 	Pham Duc Thang
	Require 					: 	No required
-*----------------------------------------------------------*/

/*----------------------------------------------------------*
                        Description
-*----------------------------------------------------------*
    Use BubleSort Algorithm to sort an array.
-*----------------------------------------------------------*/

#include "BubbleSort.h"

void bubbleSort(int *array, int size, Direction direction)
{
    switch (direction)
    {
    case Direction::S2L:
        for (int index1 = size -1; index1 > 0; index1--)
            for (int index2 = 0; index2 < index1; index2++)
                if (array[index2] > array[index2 + 1])
                    _swap(&array[index2], &array[index2 + 1]);

        break;
    case Direction::L2S:
        for (int index1 = size -1; index1 > 0; index1--)
            for (int index2 = 0; index2 < index1; index2++)

                if (array[index2] < array[index2 + 1])
                    _swap(&array[index2], &array[index2 + 1]);

        break;
    }
}

/*----------------------------------------------------------*
-*------------------------ End File ------------------------*
-*----------------------------------------------------------*/