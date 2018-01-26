#include <stdio.h>
int main()
{
    int a,b,c;
    printf("input three numbers"); 
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&a>c)  
    printf("a is the largest value");
    if(b>a&&b>c)
    printf("b is the largest value");
    else
    printf("c is the largest value");
  
    getch();
}
