// Question 6
#include<iostream>
using namespace std;
template <class t>
class shapes
{
public:
    t len,bre;
    shapes(t l,t b)
    {
        len=l;
        bre=b;
    }
    t square()
    {
        cout<<"Area of square:"<<2*len<<endl;
    }
    t rect()
    {
        cout<<"Area of rect:"<<len*bre<<endl;
    }

};
int main()
{
    shapes<int> obj1(9,2);
    obj1.square();
    obj1.rect();
    shapes<float> obj2(12,10);
    obj2.square();
    obj2.rect();
}
