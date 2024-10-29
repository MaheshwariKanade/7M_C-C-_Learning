// Abstract Class

#include<iostream>
using namespace std;
class shape
{
public:
    int d;
    void getdimension()
    {
        cin>>d;
    }
    virtual double getarea()=0;
};
class square:public shape
{
public:
    double getarea()
    {
        return d*d;
    }
};
class circle:public shape
{
public:
    double getarea()
    {
        return 3.14*d*d;
    }
};
int main()
{
    square s;
    circle c;

    cout<<"Enter side of square"<<endl;
    s.getdimension();
    cout<<"Area of square is:"<<s.getarea()<<endl;

    cout<<"Enter radius of circle"<<endl;
    c.getdimension();
    cout<<"Area of circle is:"<<c.getarea()<<endl;
}
