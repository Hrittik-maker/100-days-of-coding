//Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main(void){
// F = (C * 9/5) + 32
float c, f;
printf("enter the temperature inb celcius\t ");
scanf("%d", &c);
f = (c * 9.0/5.0) + 32.0;
printf("The value of temperature in fahrenheit is %f", f);
return 0;
}