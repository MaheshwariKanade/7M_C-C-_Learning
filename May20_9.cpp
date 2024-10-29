// 9) function with no return but with argument

#include<iostream>
using namespace std;
void sum(int,int);
int main()
{
    sum(10,20);
    return 0;
}
void sum(int n1,int n2)
{
    cout<<(n1+n2);
}
