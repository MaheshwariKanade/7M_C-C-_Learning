// 3.Inheritance : Simple Inheritance (one parent-one child)

#include<iostream>
using namespace std;
class base
{
public:
    int a,b;
    void getvalues()
    {
        cout<<"Enter 2 numbers:"<<endl;
        cin>>a>>b;
    }
};
class derived:public base
{
public:
    void add()
    {
        cout<<"Addition is: "<<a+b;
    }
};
int main()
{
    derived d1;
    d1.getvalues();
    d1.add();
    return 0;
}
