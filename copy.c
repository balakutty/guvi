#include <stdio.h>

int main(void) {
	int x,i,temp,j;
	scanf("%d",&n);
	int a[x];
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
			
		}
		printf("%d",a[i]);
		
		
			
		
	
	}
	
	return 0;
}
