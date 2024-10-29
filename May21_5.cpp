// 5

#include<iostream>
using namespace std;

class rect
{
public:
    int l,b;
    int area();
};
int rect::area()
{
    cout<<"Enter the value of l and b:"<<endl;
    cin>>l>>b;
    return l*b;
}
int main()
{
    rect r1;
    int a;
    a=r1.area();
    cout<<"Area of Rectangle is:"<<a;
    return 0;
}
