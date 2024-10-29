// Friend Function

#include<iostream>
using namespace std;
class A
{
public:
    int x,y;
    A()
    {
        cout<<"Enter value of x,y"<<endl;
        cin>>x>>y;
    }
    friend int add(A);
};
int add(A a)
{
    return a.x+a.y;
}
int main()
{
    A obj;
    cout<<"Addition is:"<<add(obj);
}
