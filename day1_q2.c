//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.
 #include<stdio.h>
 int main()
 {
 	int a,b,c,p,d,q,h,g,k,l,m,n;
 	printf("enter two numbers\n");
 	scanf("%d %d",&a,&b);
 	c=a+b;
 	printf("the sum is =%d\n",c);
 	printf("enter two numbers\n");
 	scanf("%d %d",&m,&n);
 	d=a-b;
 	printf("The diff is = %d\n",d);
 	printf("enter two numbers\n");
 	scanf("%d %d",&h,&g);
 	p=h*g;
 	printf("The product is = %d\n",p);
 	printf("enter two numbers\n");
 	scanf("%d %d",&k,&l);
 	q=k/l;
 	printf("The quotient is = %d\n",q);
 	
 	return 0;
 	
 }
