//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>
int main()
{
	float c,f;
   printf("enter temperature in C\n");
   scanf("%f",&c);
   f=c*1.8+32;
   printf("converted temperature is = %.2f\n", f);
   
   
   	
	return 0;
}
