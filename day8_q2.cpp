//Q16: Write a program to input three numbers and find the largest among them using if–else.

#include<stdio.h>
int main()
{
	int x,y,z;
	printf("enter three numbers");
	scanf("%d %d %d" , &x,&y,&z);
	if(x>y && x>z)
	printf("%d is the greatest number" ,x);
	else if( x<y && z<y)
		printf("%d is the greatest number" ,y);
		else if (z>x && z>y)
			printf("%d is the greatest number" ,z);
			return 0;
}
