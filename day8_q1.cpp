#include<stdio.h>
int main()
{
	char a;
	printf("enter any character\n");
	scanf("%c" , &a);
	int k = (int)a;
	if(k>= 65 && k<= 90)
	{
		printf("uppercase");
	
	}
	else if (k>=97 && k<= 122)
	{
			printf("lowercase");
		
	}
	else if (k>= 48 && k<= 57)
	{
			printf("digits");
		
	}
	else {
	
	printf("special character");
	}
	return 0;
}
