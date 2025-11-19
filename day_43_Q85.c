//Reverse a string.
#include <stdio.h>
#include <string.h> 
int main(void) {
    char str[100];
    int length, i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    // Remove the newline character added by fgets, if present
    length = strlen(str);
    if (length > 0 && str[length - 1] == '\n') {
        str[length - 1] = '\0';
        length--;
    }
    
    printf("Reversed string: ");
    // Print the string in reverse order
    for (i = length - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    
    return 0;
}   
