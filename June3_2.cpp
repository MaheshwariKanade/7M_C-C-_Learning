// ++ operator overload

#include<iostream>
using namespace std;
class increment
{
public:
    int x;
    increment()
    {
        x=100;
    }
    void operator ++()
    {
        x++;
    }
    void operator ++(int)
    {
        ++x;
    }
    void display()
    {
        cout<<"Value of a is: "<<x<<endl;
    }
};

int main()
{
    increment obj;
    obj++;
    obj.display();
    ++obj;
    obj.display();
}
