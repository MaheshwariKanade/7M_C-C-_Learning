// Hierarchical Inheritance (one parent - multiple child)

#include<iostream>
using namespace std;
class parent
{
public:
    int x,y;
    void getvalue()
    {
        cout<<"Enter 2 numbers: "<<endl;
        cin>>x>>y;
    }
};
class child1:public parent
{
public:
    void add()
    {
        cout<<"The addition of 2 numbers is: "<<x+y<<endl;
    }
};
class child2:public parent
{
public:
    void sub()
    {
        cout<<"The subtraction of 2 numbers is: "<<x-y<<endl;
    }
};
class child3:public parent
{
public:
    void mul()
    {
        cout<<"The multiplication of 2 numbers is: "<<x*y<<endl;
    }
};
class child4:public parent
{
public:
    void div()
    {
        cout<<"The division of 2 numbers is: "<<x/y<<endl;
    }
};
int main()
{
    child1 c1;
    c1.getvalue();
    c1.add();
    child2 c2;
    c2.getvalue();
    c2.sub();
    child3 c3;
    c3.getvalue();
    c3.mul();
    child4 c4;
    c4.getvalue();
    c4.div();
    return 0;
}




