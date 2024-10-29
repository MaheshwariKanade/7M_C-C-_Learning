// 2.swapping of 2 no.s program

#include<stdio.h>
void main()
{
    int n1,n2,t;
    printf("Enter two numbers:\n");
    scanf("%d%d",&n1,&n2);
    printf("The 2 numbers before swapping are:\nn1=%d\tn2=%d\n",n1,n2);
    t=n1;
    n1=n2;
    n2=t;
    printf("The 2 numbers after swapping are:\nn1=%d\tn2=%d",n1,n2);
}
