#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void) {

//prompt for name
string s = get_string();

//converts first letter to uppercase
printf("%c", toupper(s[0]));

//extracts and converts remaining letters to uppercase
    for (int i = 0; i < strlen(s); i++) {
        if (isspace(s[i])) {
        printf("%c", toupper(s[i+1]));
        
        }
   }
   
   printf("\n");
   
    return 0;
}
