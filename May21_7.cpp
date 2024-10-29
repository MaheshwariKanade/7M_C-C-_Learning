// 7-Constructor

#include<iostream>
using namespace std;

class rect{
public:
    int l,b;
    rect()
    {
        cout<<"Enter length and breath of rectangle: "<<endl;
        cin>>l>>b;
    }
    void area()
    {
        cout<<"Area of Rectangle: "<<l*b<<endl;
    }
    void perim()
    {
        cout<<"Perimeter of Rectangle: "<<2*(l+b)<<endl;
    }
};

int main()
{
    rect r1;
    r1.area();
    r1.perim();
    return 0;
}
