#include "QuickSort.h"

int _partition(int *array, int left, int right, Direction direction = Direction::S2L)
{
    int _l, _r, pivot;
    switch (direction)
    {
    case Direction::S2L:
        _l = left; _r = right; pivot = array[right];
        while (_l < _r)
        {
            while ((array[_l] < pivot) && (_l < _r)) ++_l;
            while ((array[_r] >= pivot) && (_l < _r)) --_r;
            if (_l < _r) {
                _swap(&array[_l], &array[_r]);
                ++_l; --_r;
                }
        }
        if (pivot < array[_l]) _swap(&array[_l], &array[right]);
        return _l;
    case Direction::L2S:
        _l = left; _r = right; pivot = array[left];
        while (_l < _r)
        {
            while ((array[_l] >= pivot) && (_l < _r)) ++_l;
            while ((array[_r] < pivot) && (_l < _r)) --_r;
            if (_l < _r) {
                _swap(&array[_l], &array[_r]);
                ++_l; --_r;
                }
        }
        if (pivot < array[_l]) _swap(&array[_l], &array[left]);
        return _l;
    }
}

void quickSort(int *array, int left, int right, Direction direction)
{
    if (right > left)
    {
        int index = _partition(array, left, right, direction);
        quickSort(array, left, index - 1, direction);
        quickSort(array, index + 1, right, direction);
    }
}