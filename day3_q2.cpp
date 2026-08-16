//Q6: Write a program to swap two numbers using a third variable.
#include<stdio.h>
int main()
{
int a = 10;
int b = 15;
int c = 0;
 printf("orignal value of a is %d and b is %d\n", a,b);
 c=a;
 a=b;
 b=c;
 printf("new value of a %d\n",a);
 printf("new value of b %d \n", b);


	return 0;
}
