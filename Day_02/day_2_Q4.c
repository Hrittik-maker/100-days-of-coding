//Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main(void){
float r , a, c;
printf("enter the radius and breadth of rectangle\t:");
scanf("%f", &r);
a = 3.14*r*r;
c = 3.14*2*r;
printf("The area and circumference of the circle of radius %f is %f and %f", r, a, c);

return 0;

}