// 7) Do-While loop

#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    int i=n1;
    do
    {
        cout<<i<<endl;
        i++;
    }while(i<=n2);
    return 0;
}
