//Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>
int main()
{
	int a,b,l,p;
	printf("enter the length and breadth of the rectangle\n");
	scanf("%d %d", &l,&b);
	p=2*(l+b);
	printf("the perimeter is = %d\n", p);
	a = l*b;
	printf("the area is = %d",a);
	return 0;
}
