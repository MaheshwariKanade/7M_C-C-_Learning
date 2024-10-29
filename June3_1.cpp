// + operator Overload:

#include<iostream>
using namespace std;
class Add
{
public:
    int x;
    Add(int a)
    {
        x=a;
    }
    void operator +(Add obj1)
    {
        int sum = x+obj1.x;           // + is used for addition of 2 int values
        cout<<"Addition is:"<<sum;
    }
};
int main()
{
    Add s1(12);
    Add s2(13);
    s1+s2;  // + is used to add 2 objects
}
