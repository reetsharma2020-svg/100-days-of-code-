//Q17: Write a program to find the roots of a quadratic equation and categorize them.
#include<stdio.h>
#include<math.h>
int main()
{
	int m,a,b,c,d, p,r;
	printf("enter the value of variable");
	scanf("%d %d %d" , &a , &b , &c);
	m = (b*b)-(4*a*c);
	d= sqrt(m);
	r = (-b+d)/(2*a);
	p = (-b-d)/(2*a);
	if (d>0)
	{
		printf("real and distinct roots");
	}
		else if( d<0)
		{
		printf("imaginary roots");
	}
		else
		{
		
		printf("real and same roots");
	}
	 printf("\n the roots are %d %d " , p, r);
			return 0;
}
