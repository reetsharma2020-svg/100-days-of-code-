//Q8: Write a program to find and display the sum of the first n natural numbers.
#include<stdio.h>
int main()
{
	int n,s;
	printf("enter the number of natural numbers");
	scanf("%d", &n);
	s = n*(n+1)/2;
	printf("the sum of %d natural numbers is %d",n,s);
	
	return 0;
	
}
