#include<stdio.h>
void main()
{
int i,k,a,d,sum=0;
printf("\n Enter the number of arithmetic progression");
scanf("%d",&k);
printf("\n Enter a and d values");
scanf("%d%d",&a,&d);
for(i=1;i<=k;i++)
{
sum=sum+(a+(i*d));
}
  printf("\nResult is %d",sum);
return 0;
}
