/******************************************************************************
Name of File: bubble_sort.cpp
Description: Bubble sort algorithm implementation in C++ using arrays
Author: Krishnan A 
Last Updated: 05th November 2018
*******************************************************************************/

// Including library files
#include <iostream>
using namespace std;

// Description: User defined functions
void swap (int *element1, int *element2) {
    
    int temp;
    temp = *element1;
    *element1 = *element2;
    *element2 = temp;
    
}

void bubblesort (int array[], int num_of_elements) {
    
    int j;
    int k;
    bool swapped;
    
    for (j=0; j<num_of_elements; j++) {
        swapped = false;
        for (k=0; k<=num_of_elements-j-1; k++) {
            if (array[k] > array[k+1]) {
                swap (&array[k], &array[k+1]);
                swapped = true;
            }
        }
        
        if (swapped == false) {
            break;
        }
    }
}

void print_sorted_array (int array[], int num_of_elements) {

    int l;
    
    cout << "Sorted array is \n" << endl;
    
    for (l = 0; l < num_of_elements; l++) {
        cout << array[l] << "\t" << endl;;
    }
}

int main () {
    int array[] = {10,40,16,1,5};
    int num_of_elements = (sizeof(array))/sizeof(array[0]);
    //cout << "Num of elements is " << num_of_elements << endl;
    bubblesort (array, num_of_elements);
    print_sorted_array (array, num_of_elements);
    return 0;
}
