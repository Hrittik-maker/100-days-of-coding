//Write a program to find the LCM of two numbers.
#include<stdio.h>
int main(void){
    int num1, num2, lcm, max;
    printf("Enter two positive integers to find their LCM: ");
    scanf("%d %d", &num1, &num2);
    // LCM is the smallest number that is a multiple of both num1 and num2
    max = (num1 > num2) ? num1 : num2; // Start from the larger number
    while(1){
        if(max % num1 == 0 && max % num2 == 0){
            lcm = max;
            break;
        }
        max++;
    }
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}