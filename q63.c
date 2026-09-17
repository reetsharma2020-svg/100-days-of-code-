//Q63: Merge two arrays.
#include<stdio.h>
int main()
{
int  a[3]={1,3,4} , b[3] = {5,6,2};
int merged[6] , i;
for(i=0; i<3;i++)
{ merged[i]=a[i];
}
for(i=0;i<3;i++)
{
merged[i+3]=b[i];
}
printf("merged array: ");
for(i=0;i<6;i++)
{ printf("%d",merged[i]);
}
return 0;
}

