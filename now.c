#include <stdio.h>

int main(void) 
{
	int p,a[100],i;
	scanf("%d",&p);
	for(i=0;i<p;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<p;i++)
	{
		printf("%d %d\n",a[i],i);
	}
	return 0;
}
