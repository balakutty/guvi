
#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=0;
    printf("enter the numbers");
    scanf("%d",&b);
    while(a!=0)
    {
        a/=10;
        ++b;
    }
    printf("Number of digits %d",b);
    getch();
