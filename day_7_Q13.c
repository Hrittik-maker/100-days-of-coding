//Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include <stdio.h>
int main (void){
    int year;
    printf("enter a year that u wanna check is leap year or not:\t ");
    scanf("%d", &year);
    if ((year %4 ==0 && year %100 !=0) || (year %400 ==0)) {
        printf("The entered year is a leap year\n");
    }
    else {
        printf("The entered year is not a leap year\n");
    }
    return 0;
}   