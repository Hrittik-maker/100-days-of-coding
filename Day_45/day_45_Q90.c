//Toggle case of each character in a string.
#include <stdio.h>
int main(void) {
    char str[100];
    int i = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Toggle case for each character until the null terminator is reached
    while (str[i] != '\0') {
        // Check if the character is uppercase
        if (str[i] >= 'A' && str[i] <= 'Z') {
            // Convert to lowercase by adding 32 to its ASCII value
            str[i] = str[i] + ('a' - 'A');
        }
        // Check if the character is lowercase
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            // Convert to uppercase by subtracting 32 from its ASCII value
            str[i] = str[i] - ('a' - 'A');
        }
        i++;
    }
    printf("Toggled case string: %s", str);
    return 0;
}   