// Simple Exception Handling

#include<iostream>
using namespace std;
int main()
{
    try
    {
        int age;
        cout<<"Enter your age:"<<endl;
        cin>>age;
        if(age>=18)
        {
            cout<<"Access Granted."<<endl;
        }
        else
        {
            throw(age);
        }
    }
    catch(int n)
    {
        cout<<"Access Denied."<<endl;
        cout<<"Your age is: "<<n;
    }
    return 0;
}
