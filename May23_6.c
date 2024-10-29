// 6. Multiply 2 numbers using pointers.
#include<stdio.h>
void main()
{
    int a,b,*pa,*pb;
    pa=&a;
    pb=&b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Multiplication is:\n %d * %d = %d", a,b,*pa*(*pb));
}
