//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
int main(void) {
    char str[100];
    int i = 0;
    int freq[26] = {0}; // Frequency array for 'a' to 'z'

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Iterate through each character until the null terminator is reached
    while (str[i] != '\0') {
        char ch = str[i];
        // Check if the character is a lowercase letter
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++; // Increment frequency count for the character
            // If frequency becomes 2, it's the first repeating character
            if (freq[ch - 'a'] == 2) {
                printf("The first repeating lowercase alphabet is: %c\n", ch);
                return 0;
            }
        }
        i++;
    }

    printf("No repeating lowercase alphabet found in the string.\n");
    return 0;
}   
