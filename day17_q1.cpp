//Q33: Write a program to check if a number is an Armstrong number.
#include<stdio.h>
int main()
{
	int a, orignal , remainder , sum=0;
	printf("enter the number to be checked\n");
	scanf("%d", &a);
	orignal = a;
	while (a != 0)
	{
		remainder = a%10;
		sum = sum + remainder*remainder*remainder;
		a=a/10;
	}
	if(sum == orignal)
	printf("%d is an Armstrong number", sum);
	else 
		printf("%d is not an Armstrong number",sum);
	return 0;
}
