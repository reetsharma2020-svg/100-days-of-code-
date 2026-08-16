//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include<stdio.h>
int main()
{
	int s,sec,hr,min;
	printf("enter time in seconds\n");
	scanf("%d",&sec);
	hr = sec/3600;
	sec=sec%3600;
	min = sec/60;
	s=sec%60;
	printf("%d:%d:%d",hr,min,s);
	return 0;
}
