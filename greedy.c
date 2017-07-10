#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main (void) {
    
    float change;
    do {
        printf("Required change amount: ");
        change = GetFloat();
    } while ( change < 0);
    
    
    int total = round(change*100);
    int count = 0;
    while ( total >= 25 ){
        
        count++; 
        total -= 25;
    }
        while ( total >= 10 ){
        
        count++; 
        total -=10;
    }
        while ( total >= 5 ){
        
        count++; 
        total -=5;
    }
        while ( total >= 1 ){
        
        count++; 
        total -=1;
    }
    
    
    printf("%i\n", count);
    
    
}
