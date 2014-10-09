#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target, int array[], int startIndex, int endIndex)
{
    int middleIndex = (startIndex + endIndex) / 2;
    printf("middleIndex: %d\n", middleIndex);

    // if(middleIndex % 2 >= 0.5)
        // middleIndex += 1;

    if(target == array[middleIndex])
        return middleIndex;
    else if(startIndex == endIndex)
        return -1;
    else
    {
        if(target < array[middleIndex])
            binarySearch(target, array, startIndex, middleIndex - 1);
        else
            binarySearch(target, array, middleIndex + 1, endIndex);
    }
}