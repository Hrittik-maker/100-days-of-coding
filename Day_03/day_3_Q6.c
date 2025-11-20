//Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main(void){
    int a, b, temp;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp = a;
    a = b; // In C (and most programming languages):
           // The right side (RHS) is evaluated first, and its value is then assigned to the left side (LHS).
    b = temp;
    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}