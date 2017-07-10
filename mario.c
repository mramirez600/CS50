#include <stdio.h>
#include <cs50.h>

int main(void) {
    
    int height;

//validate usage
    do {
        printf("Enter pyramid height: ");
        height = get_int();
        
    } while (height > 23 || height < 0);

//build pyramids with spaces and hash based on entered height
    for (int rows = 0;  rows < height; rows++) {               
        
        for (int spaces = height - 1 ; spaces > rows  ; spaces--) {
            printf(" ");
        }
        for (int hash = 0; hash <  rows+2 ; hash++) {
            printf("#");
        }    
                                                        
         printf("\n");   
    }
    
    
}
