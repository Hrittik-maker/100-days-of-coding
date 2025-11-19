//Write a program to find the sum of digits of a number.
#include<stdio.h>
int main(void){
    int number, sum = 0, remainder;
    printf("Enter an integer number to find the sum of its digits: ");
    scanf("%d", &number);
    number = (number < 0) ? -number : number; // Make number positive
    while(number != 0){
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }
    printf("The sum of the digits is: %d\n", sum);
    return 0;
}