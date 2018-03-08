#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	int m,i,flag;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			printf("no");
			break;
		}
	}
	if(flag==1)
	{
		printf("\n yes");
	}
	}
