#include<stdio.h>
int main()
{
int base,exponent,counter;
long long power=1;
printf("enter base and exponent value:\n");
scanf("%d%d",&base,&exponent);
for(counter=1;counter<exponent;counter++)
{
power=power*base;
}
printf("%d^%d=%lld",base,exponent,power);
return 0;
}
