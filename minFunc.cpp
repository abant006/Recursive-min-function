#include "minFunc.h"

// don't go through the "steps" of recursion
// just understand what the function is doing: finding the smallest value in an array of a GIVEN size
// just figure out the recursive step of how the solution/function will find the smallest value in the smaller size array: STOP THERE! Don't search deeper than that
// have faith in your function, it'll do the solution on a simpler set of values passed in. all you need to do is compare that with what has not been checked
// (i.e, don't go through step by step)
const int * min(const int arr[], int arrSize) {
    // tempPtr that stores the address of that smallest integer
    const int *tempPtr = nullptr;

    // base case: if size passed in is zero, return nullptr
    if (arrSize == 0) {
        return nullptr;
    } 

    // base case: if there is only one element left in the array, return smalled value
    else if (arrSize == 1) {
        tempPtr = &arr[0];
    }

    // recursive case: is the first index of the array passed in with a certain size less than the the minimum value found from the rest of the array
    else {
        // have tempPtr point to the minimum value found in the rest of the array after the first element
        tempPtr = min(arr + 1, arrSize - 1);
        // compare that minimum value found to the first element in the array. If the first element is smaller, than point tempPtr to that
        if (arr[0] < *tempPtr) {
            tempPtr = &arr[0]; // could also do tempPtr = arr, since an array is a pointer that stores the address of the FIRST index
        }
    }
    return tempPtr;
}