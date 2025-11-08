//Write a program to input two numbers and display their sum, difference, product, and quotient.
#include<stdio.h>
int main(void){
int a, b;
printf("enter the no.s a & b\n");
scanf("%d %d", &a ,&b);
printf("The sum of the two no.s a & b is : %d\n", a+b);
printf("The difference of the two no.s a & b is : %d\n", a-b);
printf("The product of the two no.s a & b is : %d\n", a*b);
printf("The quotient of the two no.s a & b is : %d\n", a/b);
return 0;
}
