#include "Material.h"

void _swap(int *numA, int *numB)
{
    int _temporary = *numA;
    *numA = *numB;
    *numB = _temporary;
}