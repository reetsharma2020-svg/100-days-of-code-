//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter the values of length of the triangle\n ");
	scanf("%d %d %d" , &x , &y , &z);
	if (x==y && y==z && x==z )
	printf("it is equilateral triangle");
	else if(x==y || y==z ||  x==z  )
		printf("it is isosceles triangle");
	else 
	printf("it is scalene triangle");
	
	return 0;
}
