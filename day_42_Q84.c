//Convert a lowercase string to uppercase without using built-in functions.
#include <stdio.h>
int main(void) {
    char str[100];
    int i = 0;
    
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);
    
    // Convert each character to uppercase until the null terminator is reached
    while (str[i] != '\0') {
        // Check if the character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Convert to uppercase by subtracting 32 from its ASCII value
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    
    printf("The uppercase string is: %s", str);
    
    return 0;
}   