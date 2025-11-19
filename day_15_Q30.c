//Write a program to reverse a given number.
#include<stdio.h>
int main(void){
    int number, reversed_number = 0, remainder;
    printf("Enter an integer number to reverse: ");
    scanf("%d", &number);
    while(number != 0){
        remainder = number % 10;
        reversed_number = reversed_number * 10 + remainder;
        number /= 10;
    }
    printf("The reversed number is: %d\n", reversed_number);
    return 0;
}