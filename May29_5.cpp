// 5.Multiple Inheritance -Area of Rectangle:

#include<iostream>
using namespace std;
class A
{
public:
    int l;
    void getl()
    {
        cout<<"Enter length value: "<<endl;
        cin>>l;
    }
};
class B
{
public:
    int b;
    void getb()
    {
        cout<<"Enter breadth value: "<<endl;
        cin>>b;
    }
};
class C:public A,public B
{
public:
    void areaRect()
    {
        cout<<"Area of Rectangle is: "<<l*b<<endl;
    }
    void areaSq()
    {
        cout<<"Area of Rectangle is: "<<l*l;
    }
};
int main()
{
    C o1;
    o1.getl();
    o1.getb();
    o1.areaRect();
    o1.areaSq();
    return 0;
}
