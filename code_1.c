#include<stdio.h>
int main() {
	int length, breadth, area;
	printf("enter length and breadth:- ");
	scanf_s("%d %d", &length, &breadth);
	area = length * breadth;
	printf("The area of the given rectangle is %d", area);
	return 0;

}