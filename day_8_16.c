//Write a program to input three numbers and find the largest among them using if–else.
#include<stdio.h>
int main(void){
int a,b,c;
printf("enter three numbers: ");
scanf("%d %d %d", &a,&b,&c);
if (a>b && a>c) {
    printf("a is the largest number: %d\n",a);
}
else if (b>c && b>a) {
    printf("b is the largest number: %d\n",b);
}
else {
    printf("c is the largest number: %d\n",c);
}
    return 0;
}