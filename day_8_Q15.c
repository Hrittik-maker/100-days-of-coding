//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>


int main() {
    char ch;

    // 1. Input Character
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // 2. Check for Uppercase Alphabet
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is an UPPERCASE alphabet.\n", ch);
    }
    
    // 3. Check for Lowercase Alphabet
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a LOWERCASE alphabet.\n", ch);
    }
    
    // 4. Check for Digit
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a DIGIT.\n", ch);
    }
    
    // 5. Default to Special Character (If none of the above)
    else {
        printf("The character '%c' is a SPECIAL CHARACTER.\n", ch);
    }

    return 0;
}
