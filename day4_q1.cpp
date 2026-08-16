//Q7: Write a program to swap two numbers without using a third variable
#include<stdio.h>
int main()
{ 
int a=25;
int b = 30;
printf("orignal value of a is %d and b is %d\n", a , b);
a = a+b;
b=a-b;
a=a-b;
printf("new value of a is %d and b is %d", a,b);

return 0;
}

