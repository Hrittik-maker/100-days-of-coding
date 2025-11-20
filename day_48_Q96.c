//Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>
void reverseWord(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
int main(void) {
    char str[200];
    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    char *wordStart = NULL;
    char *ptr = str;

    while (*ptr != '\0') {
        if (wordStart == NULL && *ptr != ' ' && *ptr != '\n') {
            wordStart = ptr; // Mark the start of a word
        }
        if (wordStart != NULL && (*ptr == ' ' || *ptr == '\n' || *(ptr + 1) == '\0')) {
            char *wordEnd = ( (*ptr == ' ' || *ptr == '\n') ? ptr - 1 : ptr );
            reverseWord(wordStart, wordEnd); // Reverse the identified word
            wordStart = NULL; // Reset for the next word
        }
        ptr++;
    }

    printf("Sentence after reversing each word: %s", str);
    return 0;
}   