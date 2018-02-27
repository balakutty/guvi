#include <stdio.h>
#include<string.h>
void main() 
{
int arr[10],i,a,max=0;
scanf("%d",&a);
for(i=0;i<a;i++)
{
	scanf("%d",&arr[i]);
}
for(i=0;i<a;i++)
{
	if(max<arr[i])
	{
		max=arr[i];
	}
}
printf("%d",max);
return 0;
}
