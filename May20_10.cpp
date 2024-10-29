// 10) function with return but no argument

#include<iostream>
using namespace std;
int sum();
int main()
{
    cout<<sum();
    return 0;
}
int sum()
{
    int n1=10,n2=20;
    return (n1+n2);
}

