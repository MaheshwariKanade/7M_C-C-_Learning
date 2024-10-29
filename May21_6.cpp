// 6-Constructor

#include<iostream>
using namespace std;

class add{
public:
    int a,b;
    add()
    {
        cout<<"Enter 2 numbers:"<<endl;
        cin>>a>>b;
        cout<<"addition is: "<<a+b;
    }
};

int main()
{
    add a1;
    return 0;
}
