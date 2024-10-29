// 4.Multiple Inheritance (many parent-one child)

#include<iostream>
using namespace std;
class A
{
public:
    int x;
    void getx()
    {
        cout<<"Enter a number: "<<endl;
        cin>>x;
    }
};
class B
{
public:
    int y;
    void gety()
    {
        cout<<"Enter a number: "<<endl;
        cin>>y;
    }
};
class C
{
public:
    int z;
    void getz()
    {
        cout<<"Enter a number: "<<endl;
        cin>>z;
    }
};
class D:public A,public B,public C
{
public:
    void multi()
    {
        cout<<"Multiplication is: "<<x*y*z<<endl;
    }
};
int main()
{
    D o1;
    o1.getx();
    o1.gety();
    o1.getz();
    o1.multi();
}
