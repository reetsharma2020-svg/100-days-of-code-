//Q4: Write a program to calculate the area and circumference of a circle given its radius.
#include<stdio.h>
int main()
{
	int r;
	printf("enter the radius of the circle");
	scanf("%d", &r);
	double c= 2*3.14*r;
	printf("\n the circumfrence of circle is %.2f", c);
	double a = 3.14*r*r;
	printf("the area of circle is %.2f", a);
	return 0;
}
