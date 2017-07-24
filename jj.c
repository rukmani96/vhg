#include<stdio.h>
int main()
{
long num;
int count=0;
printf("enter any value:");
scanf("%lf",&num);
while(num!=0)
{
count++;
num /=10;
}
printf("total digits:%d",count);
return 0;
}
