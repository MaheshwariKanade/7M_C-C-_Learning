// 3. find count of Even numbers in predefined array.

#include<stdio.h>
void main()
{
    int arr[7]={1,2,3,4,5,6,7};
    int c=0;
    for(int i=0;i<7;i++)
    {
        if(arr[i]%2==0)
        {
            c++;
        }
    }
    printf("Total numbers of Even numbers in predefined array is: %d",c);
}
