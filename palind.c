#include<stdio.h>
int main()
{
	int r,n,s,sum=0;
	scanf("%d",&n);
	r=n;
	while(r!=0)
	{
		s=r%10;
		sum=sum*10+b;
		r=r/10;
	}
	if(n==sum)
	{
		printf("palindrome");
	}
	else
	{
		printf("not a palindrome");
	}
	return 0;
	
