#include "minFunc.h"


const int * min(const int arr[], int arrSize) {
    // tempVal int variable that stores the value in the last index of the array as you go
    int tempVal = arr[arrSize - 1];
    // tempPtr that stores the address of that smallest integer as you go
    const int *tempPtr = nullptr;

    // base case: if size passed in is zero, return nullptr
    if (arrSize == 0) {
        return nullptr;
    } 

    // base case: if there is only one element left in the array, return smalled value
    else if (arrSize == 1) {
        // point tempPtr to the LOCATION of the "last" value in the array
        tempPtr = &tempVal;
    }

    // recursive case: ...
    else {
        tempPtr = min(arr, arrSize - 1);
        if (tempVal <= *tempPtr)
        {
            tempPtr = &tempVal;
        }
    }

    return tempPtr;
}