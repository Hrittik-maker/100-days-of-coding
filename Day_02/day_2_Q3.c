//Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main(void){
int l, b, a, p;
printf("enter the lenght and breadth of rectangle\n");
scanf("%d %d", &l, &b);
a = l*b;
p = 2*(l+b);
printf("Area and perimeter of the rectangle is %d and %d ", a , p);
return 0;
 }
 