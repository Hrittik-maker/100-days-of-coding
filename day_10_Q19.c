//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(void){

    float s1, s2, s3;
    printf("Enter the lengths of the 3 sides of the triangle: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    if (s1 == s2 ==s3){
        printf("the entered lengths form an equilateral trinagle\n");

    }
    else if (s1 == s2 && s3 != s1 && s3!= s2 || s2 == s3 && s1 != s2 && s1 != s3 ||
             s1 == s3 && s2 != s1 && s2 != s3){
        printf("the entered lengths form an isosceles triangle\n");
    }
    else {
        printf("the entered lengths form a scalene triangle\n");
    }
    return 0;
}