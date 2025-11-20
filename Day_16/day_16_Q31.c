//Write a program to take a number as input and print its equivalent binary representation.
#include<stdio.h>
int main(void){
    int number, binary[32], i = 0;
    printf("Enter a positive integer number: ");
    scanf("%d", &number);
    if(number < 0){
        printf("Please enter a positive integer.\n");
        return 1;
    }
    while(number > 0){
        binary[i] = number % 2;
        number /= 2;
        i++;
    }
    printf("The binary representation is: ");
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binary[j]);
    }
    printf("\n");
    return 0;
}   