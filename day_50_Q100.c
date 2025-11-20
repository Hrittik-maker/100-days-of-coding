//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>
int main(void) {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    printf("All substrings of the string:\n");
    // Generate all substrings
    for (size_t i = 0; i < len; i++) {
        for (size_t j = i; j < len; j++) {
            for (size_t k = i; k <= j; k++) {
                putchar(str[k]);
            }
            putchar('\n');
        }
    }

    return 0;
}
    