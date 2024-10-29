// 1.Destructor Method

#include<iostream>
using namespace std;
int main()
{
    class A
    {
    public:
        A()
        {
            cout<<"Constructor Method"<<endl;
        }
        ~A()
        {
            cout<<"Destructor Method";
        }
    };
    A a;
    return 0;
}
