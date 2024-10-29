// Question 4

#include<iostream>
using namespace std;
class add
{
public:
    int n1,n2,n3,n4,sum1,sum2;
    add()
    {
        cout<<"Enter three numbers:"<<endl;
        cin>>n1>>n2>>n3;
    }
    void addition1()
    {
        sum1=n1+n2;
        cout<<"Addition of first two numbers: "<<sum1<<endl;
    }
    void addition2()
    {
        sum2=n3+n4;
        cout<<"Addition of next two numbers: "<<sum2<<endl;
    }
    void operator +()
    {

    }
};
int main()
{
    add obj;
    obj.addition1();
    obj.addition2();
}
