#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) {
    
//validate usage
    if (argc != 2)
    {
        printf("Usage: ./vigenere k\n");
        return 1;
    } 
    
    for(int i = 0, n = strlen(argv[1]); i < n; i++) {
        if (isalpha(argv[1][i]) == false) {
        printf("Usage: ./vigenere k\n");
        return 1;
        }
    }
    

 //prompt for text to be encoded       
    printf("plaintext: ");
    
    string plain = get_string();
   
    printf("ciphertext: ");
    
//initialize tracking for ciphertext encode
    int j = 0;
//encode plaintext    
    for (int i = 0, n = strlen(plain); i < n; i++)
    {
        j = j % strlen(argv[1]); //loop back to first position for ciphertext encode

        if (isalpha(plain[i]))
        {
            if (islower(plain[i]) && islower(argv[1][j% strlen(argv[1])]))
                printf("%c", (((plain[i] - 97) + (argv[1][j] - 97)) % 26) + 97);
            else if (isupper(plain[i]) && islower(argv[1][j]))
                printf("%c", (((plain[i] - 65) + (argv[1][j] - 97)) % 26) + 65);
            else if (islower(plain[i]) && isupper(argv[1][j]))
                printf("%c", (((plain[i] - 97) + (argv[1][j] - 65)) % 26) + 97);
            else if (isupper(plain[i]) && isupper(argv[1][j]))
                printf("%c", (((plain[i] - 65) + (argv[1][j] - 65)) % 26) + 65);
            j++;
        }
        else
        {
            printf("%c", plain[i]);
        }
        
    }
    
    printf("\n");
    return 0;
    
}
