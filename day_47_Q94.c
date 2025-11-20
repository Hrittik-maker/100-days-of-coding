//Find the longest word in a sentence.
#include <stdio.h>
#include <string.h> 
int main(void) {
    char str[200];
    char longest[100] = "";
    int maxLength = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *token = strtok(str, " \n");
    while (token != NULL) {
        int length = strlen(token);
        if (length > maxLength) {
            maxLength = length;
            strcpy(longest, token);
        }
        token = strtok(NULL, " \n");
    }

    printf("The longest word is: %s\n", longest);
    return 0;
}   
