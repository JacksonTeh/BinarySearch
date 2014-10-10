#include <stdio.h>
#include "BinarySearch.h"

int binarySearch(int target, int array[], int startIndex, int endIndex)
{
    int middleIndex = (startIndex + endIndex) / 2;
    printf("middleIndex: %d\n", middleIndex);

    if(target == array[middleIndex])
        return middleIndex;
    else if(startIndex == endIndex)
        return -1;
    else
    {
        if(target < array[middleIndex])
        {
            if(target <= array[middleIndex - 1])
                binarySearch(target, array, startIndex, middleIndex - 1);
            else
                return -1;
        }
        else
        {
            if(target >= array[middleIndex + 1])
                binarySearch(target, array, middleIndex + 1, endIndex);
            else
                return -1;
        }
    }
}