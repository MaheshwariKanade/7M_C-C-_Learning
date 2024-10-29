// 1.leap year program

#include<stdio.h>
void main()
{
    int n;
    printf("Enter a year:\n");
    scanf("%d", &n);
    if(n%400==0)
    {
        printf("%d is leap year.", n);
    }
    else if(n%100==0)
    {
        printf("%d is not leap year.", n);
    }
    else if(n%4==0)
    {
        printf("%d is leap year.", n);
    }
    else
    {
        printf("%d is not leap year.", n);
    }
}
