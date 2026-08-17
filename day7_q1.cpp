//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter year\n");
	scanf("%d", &a);
	if ((a%400 == 0) || (a%4 == 0 && a%100 !=0))
	printf("it is a leap year");
	 else 
	printf("it is not a leap year");

	return 0;
}
