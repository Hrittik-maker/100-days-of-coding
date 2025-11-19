//Remove all vowels from a string.
#include <stdio.h>
int main(void) {
    char str[100], result[100];
    int i = 0, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Iterate through each character until the null terminator is reached
    while (str[i] != '\0') {
        char ch = str[i];
        // Check if the character is not a vowel
        if (!(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
              ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            result[j] = ch; // Copy non-vowel character to result
            j++;
        }
        i++;
    }
    result[j] = '\0'; // Null-terminate the result string
    printf("String after removing vowels: %s", result);
    return 0;
}   