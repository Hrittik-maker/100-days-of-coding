//Check if two strings are anagrams of each other.
#include <stdio.h>
int main(void) {
    char str1[100], str2[100];
    int freq[256] = {0}; // Frequency array for all ASCII characters
    int i = 0;
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    // Count frequency of each character in the first string
    while (str1[i] != '\0') {
        freq[(unsigned char)str1[i]]++;
        i++;
    }
    i = 0;
    // Decrease frequency based on characters in the second string
    while (str2[i] != '\0') {
        freq[(unsigned char)str2[i]]--;
        i++;
    }
    // Check if all frequencies are zero
    for (i = 0; i < 256; i++) {
        if (freq[i] != 0) {     
            printf("The strings are not anagrams.\n");
            return 0;
        }
    }
    printf("The strings are anagrams.\n");
    return 0;
}   