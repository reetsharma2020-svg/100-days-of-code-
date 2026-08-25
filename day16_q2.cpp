//Q32: Write a program to check if a number is a palindrome.
#include<stdio.h>
int main()
{
	int n,dig,rev=0,temp;
	printf("Enter any number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
   {
   	dig=n%10;
   	rev=rev*10+dig;
   	n=n/10;
	}	
	
    if(temp==rev)
    printf("Yes it is a Palindrome\n");
    else
    printf("Not a Palindrome\n");
			
	
	return 0;
}
