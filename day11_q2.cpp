//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include<stdio.h>
int main()
{
	float a,b,cp,profit,loss,sp, percentage;
	printf("enter cost price");
	scanf("%f",&cp);
		printf("enter selling price");
	scanf("%f",&sp);
	if (sp>cp)
 	{ 
	 profit = sp-cp;
 	percentage = (profit/cp)*100;
 	printf("profit = %.2f\n",profit);
 	printf("Profit percentage = %.2f", percentage);
	 }
	else if (cp>sp)
	{
		loss = cp-sp;
		percentage = (loss/cp)*100;
		printf("loss = %.2f\n",loss);
 	printf("loss percentage = %.2f", percentage);
	 }
	 else 
	 {
	 	printf("no loss , no profit");
	 }
	
	return 0;
}
