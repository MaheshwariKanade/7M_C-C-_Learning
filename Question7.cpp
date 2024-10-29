#include<iostream>
using namespace std;
void test(int n)
{
    try
    {
        if(n>0)
        {
            throw n;
        }
        else
        {
            throw 'n';
        }
    }
    catch(int n1)
    {
        cout<<" Exception is:"<<a<<endl;
    }
    catch(char n2)
    {
        cout<<"Exception is:"<<b<<endl;
    }
}
int main()
{
    test(25);
    test(-19);
}
