//Write a program to input a character and check whether it is a vowel or consonant using if–else.
#include <stdio.h>
int main(void){
    char ch;
    printf("enter a character:\n");
    scanf("%c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("the character entered is a vowel\n");
    }
    else {
    printf("the character entered is a consonant\n");
}
return 0;
}