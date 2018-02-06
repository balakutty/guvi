#include<stdio.h>
#include<conio.h>
void main()
{
     int i,n,sum=0;
     clrscr();
     printf("enter the how many terms\n");
     scanf("%d",&n);
     /* do loop start */
     i=1;
    do
    {
          printf("%4d",i);
          sum=sum+i;
          i++;
    }
    while(i<=n);
 
   printf("\n\nsum=%d\n",sum);
   getch();
}
