//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include<stdio.h>
int main()
{
	int a;
	printf("enter any number");
	scanf("%d",&a);
	if (a>0)
	printf("it is a positive number");
	else if (a<0)
    printf("it is a negative number");
    else 
    printf("zero");
    
	return 0;
}
