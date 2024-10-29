// polymorphism

#include<iostream>
using namespace std;
class shape
{
public:
    void area()
    {
        cout<<"Area of different shapes as follows: "<<endl;
    }
};
class square
{
public:
    int side;
    square()
    {
        cout<<"Enter side of square: "<<endl;
        cin>>side;
    }
    void area()
    {
        cout<<"Area of square is: "<<side*side<<endl;
    }
};
class circle
{
public:
    int r;
    circle()
    {
        cout<<"Enter radius of circle: "<<endl;
        cin>>r;
    }
    void area()
    {
        cout<<"Area of circle is: "<<3.14*r*r<<endl;
    }
};
class rect
{
public:
    int l,b;
    rect()
    {
        cout<<"Enter l and b of rect: "<<endl;
        cin>>l>>b;
    }
    void area()
    {
        cout<<"Area of rect is: "<<l*b<<endl;
    }
};
class triangle
{
public:
    int b,h;
    triangle()
    {
        cout<<"Enter base and heigth of triangle: "<<endl;
        cin>>b>>h;
    }
    void area()
    {
        cout<<"Area of triangle is: "<<0.5*b*h<<endl;
    }
};
int main()
{
    shape s;
    s.area();
    square s1;
    s1.area();
    circle c;
    c.area();
    rect r1;
    r1.area();
    triangle t;
    t.area();
}
