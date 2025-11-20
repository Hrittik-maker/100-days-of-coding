//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <ctype.h>
int main(void) {
    char name[100];
    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;
    // Print the first character if it's not a space
    if (name[i] != ' ' && name[i] != '\n') {
        printf("%c. ", toupper(name[i]));
    }
    // Iterate through the string to find spaces and print the next character
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            // If it's the last space before the surname, print the rest of the name
            int j = i + 1;
            int isLastSpace = 1;
            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    isLastSpace = 0;
                    break;
                }
                j++;
            }
            if (isLastSpace) {
                printf("%s", &name[i + 1]);
                break;
            } else {
                printf("%c. ", toupper(name[i + 1]));
            }
        }
        i++;
    }
    return 0;
}
