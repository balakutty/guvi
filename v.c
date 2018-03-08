#include<stdio.h>
void main()
{
int a[100],x,i,j,temp;
printf("Enter the value of x");
scanf("%d",&x);
for(i=0;i<=x;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=x;i++)
{
for(j=1;j<=x;j++)
{
if(a[i]>a[j])
{
temp=a[j];
a[j]=a[i];
a[i]=temp;
}
}
}
i=i%2;
printf("%d",a[i]);
}
