//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
int main()
{
	int p,r,t,si;
	printf("enter principle amount\n");
	scanf("%d" ,&p);
	printf("enter rate\n");
	scanf("%d" ,&r);
	printf("enter time\n");
    scanf("%d" ,&t);
    si = p*r*t/100;
    printf("The simple interest is %d\n" , si);
    
  	return 0;
}
