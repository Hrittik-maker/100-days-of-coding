//Print the initials of a name.
#include <stdio.h>
#include <ctype.h>  
int main(void) {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");
    int i = 0;
    // Print the first character if it's not a space
    if (name[i] != ' ' && name[i] != '\n') {
        printf("%c", toupper(name[i]));
    }
    // Iterate through the string to find spaces and print the next character
    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\n' && name[i + 1] != '\0') {
            printf("%c", toupper(name[i + 1]));
        }
        i++;
    }
    printf("\n");
    return 0;
}   