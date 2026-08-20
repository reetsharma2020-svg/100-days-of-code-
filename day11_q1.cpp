//Q21: Write a program to display the month name and number of days using switch-case for a given month number.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the month code\n");
	scanf("%d", &a);
	switch(a)
	{
		case 1:
			printf("january , no of days = 31");
			break;
			case 2:
			printf("february , no of days = 28");
			break;
			case 3:
			printf("march , no of days = 31");
			break;
			case 4:
			printf("april , no of days = 30");
			break;
			case 5:
			printf("may , no of days = 31");
			break;
			case 6:
			printf("june , no of days = 30");
			break;
			case 7:
			printf("july , no of days = 31");
			break;
			case 8:
			printf("august , no of days = 31");
			break;
			case 9:
			printf("september , no of days = 30");
			break;
			case 10:
			printf("october , no of days = 31");
			break;
			case 11:
			printf("november , no of days = 30");
			break;
			case 12:
			printf("december , no of days = 31");
			break;
			default : printf("no data found");
		
			
		}	
	return 0;
}
