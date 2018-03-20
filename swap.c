#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the value of a&b");
    scanf("%d %d",&a,&b);
    a=c;
    c=b;
    b=a;
    printf("%d %d",a,b);
}
