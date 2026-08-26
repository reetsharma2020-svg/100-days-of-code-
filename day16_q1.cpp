#include<stdio.h>
int main()
{
	int decimal,i=0,binary[100], rem;
	printf("enter the decimal no\n");
	scanf("%d",&decimal);
	if(decimal == 0)
	{
		printf("binary equivalent is 0");
	}
	else 
	{
		while(decimal>0)
		{
			rem=decimal%2;
			binary[i]=rem;
			decimal = decimal/2;
			i++;
		}
		printf("binary is ");
		for(int k = i-1; k>=0; k--)
		{
			printf("%d",binary[k]);
		}
	}
	return 0;
}
