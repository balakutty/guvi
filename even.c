

#include <stdio.h>

int main()
{
    int a,b;
    printf("\n enter the  value of a");
    printf("\n enter the value of b");
    scanf("%d %d",&a,&b);
    for(i=a,i<=b,i++)
    {
        if(i%2==1)
        {
            printf("odd");
        }
        else
        {
            printf("even");
        }
        }
}
