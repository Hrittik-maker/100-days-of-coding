//Count frequency of a given character in a string.
#include <stdio.h> 
int main(void) {
    char str[100], ch;
    int i = 0, frequency = 0;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    
    // Iterate through each character until the null terminator is reached
    while (str[i] != '\0') {
        if (str[i] == ch) {
            frequency++;
        }
        i++;
    }
    
    printf("The frequency of '%c' in the string is: %d\n", ch, frequency);
    
    return 0;
}
