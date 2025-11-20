//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h> 
int isRotation(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths are not equal, str2 cannot be a rotation of str1
    if (len1 != len2) {
        return 0;
    }

    // Create a new string that is str1 concatenated with itself
    char temp[2 * len1 + 1];
    strcpy(temp, str1);
    strcat(temp, str1);

    // Check if str2 is a substring of the concatenated string
    return strstr(temp, str2) != NULL;
}   