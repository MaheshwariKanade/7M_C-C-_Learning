// function overriding

#include<iostream>
using namespace std;
class parent
{
public:
    virtual void area(int s1, int s2)
    {
        cout<<"Area of Rectangle is:"<<s1*s2<<endl;
    }
};
class child:public parent
{
public:
    void area(int s1, int s2)
    {
        cout<<"Area of Triangle is:"<<0.5*s1*s2;
    }
};
int main()
{
    parent obj;
    obj.area(10,12);
    child obj1;
    obj1.area(10,12);
}
