#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    
//validate usage
    if (argc != 2 || argv[1] < 0)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    

 //prompt for text to be encoded       
    printf("plaintext: ");
    
    string plain = get_string();
    printf("ciphertext: ");
    
//encode text    
    for(int i = 0, n = strlen(plain); i < n; i++ ) {
        char cipher = plain[i];
             int key = atoi(argv[1]); 
        if(isupper(cipher)) {
            printf("%c", ((cipher+key-65)%26)+65);
        } else if (islower(cipher)) {
            printf("%c", ((cipher+key-97)%26)+97);
        } else {
            printf("%c", cipher);
        }
        
    }
    
    printf("\n");
    return 0;
    
}
