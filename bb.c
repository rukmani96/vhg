#include<stdio.h>
int main()
{
int n;
printf("enter any number:");
scanf("%d",&n);
if(n>0)
printf("number is positive:");
if(n<0)
printf("number is negative:");
else 
printf("number is zero:");
return 0;
}
