//Write a program to find the product of odd digits of a number.
#include<stdio.h>
int main(void){
    int number, product = 1, remainder, has_odd = 0;
    printf("Enter an integer number to find the product of its odd digits: ");
    scanf("%d", &number);
    number = (number < 0) ? -number : number; // Make number positive
    while(number != 0){
        remainder = number % 10;
        if(remainder % 2 != 0){
            product *= remainder;
            has_odd = 1;
        }
        number /= 10;
    }
    if(has_odd){
        printf("The product of the odd digits is: %d\n", product);
    } else {
        printf("There are no odd digits in the number.\n");
    }
    return 0;
}   