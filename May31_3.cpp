// Hybrid inheritance

#include<iostream>
using namespace std;
class A
{
protected:
    int x;
};
class B:public A      // single inheritance
{
protected:
    B()         // constructor method
    {
        cout<<"Enter length of rectangle: "<<endl;
        cin>>x;
    }
};
class C
{
protected:
    int y;
    C()        // constructor method
    {
        cout<<"Enter breadth of rectangle: "<<endl;
        cin>>y;
    }
};
class D:public B,public C  //multiple inheritance
{
public:
    D()         // constructor method
    {
        cout<<"Area of rectangle is: "<<x*y<<endl;
    }
};
class E:public D  //multilevel inheritance
{
public:
    E()         // constructor method
    {
        cout<<"Perimeter of rectangle is: "<<2*(x+y)<<endl;
    }
};
int main()
{
    //D d;
    E obj1;
}
