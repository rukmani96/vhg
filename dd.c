#include<stdio.h>
int main()
{
int i=1,n,sum=0;
printf("enter value of n:");
scanf("%d",&n);
printf("first %d numbers are\n",n);
for(i=1;i<n;i++)
{
printf("%7d",i);
sum=sum+i;
}
printf("\n\nsum=%d",sum);
return 0;
}
