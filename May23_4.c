//4. Factorial of number using function
#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    printf("factorial is:%d", fact(n));
}
int fact(n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
