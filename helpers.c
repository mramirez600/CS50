/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    //binary search
    
    
    int first = 0;
    int last = n-1;
    
    
    if (n < 0 || first>last) {
        return false;
    } 
    
    while (first <= last) {
        int mid = (first+last)/2;
        if (values[mid] < value) {
            first = mid+1;
        } else if (values[mid] == value) {
            
            return true;
        } else {
            last = mid-1;
            mid = (first+last)/2;
        }
    } 
    

          
          return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement a sorting algorithm
    //bubbles sort
    for ( int i = 0 ; i < ( n - 1 ); i++) {
        for (int j = 0 ; j < n - i - 1;j++) {
            if (values[j] > values[j+1]) {
                int swap = values[j];
                values[j]  = values[j+1];
                values[j+1] = swap;
             }
        }
    }
    return;
}
