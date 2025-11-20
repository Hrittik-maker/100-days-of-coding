//Count vowels and consonants in a string.
#include <stdio.h>  
int main(void) {
    char str[100];
    int vowels = 0, consonants = 0, i = 0; 
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 
    // Iterate through each character until the null terminator is reached
    while (str[i] != '\0') {
        char ch = str[i];
        // Check for vowels (both uppercase and lowercase)
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            // It's an alphabetic character
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
        i++;
    } 
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants); 
    return 0;
}   
