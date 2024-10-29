// Exception Handling using Multiple Catch statements.

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
    catch(int a)
    {
        cout<<"caught an int exception,and that exception is:"<<a<<endl;
    }
    catch(char b)
    {
        cout<<"caught an character exception,and that exception is:"<<b<<endl;
    }
}
int main()
{
    test(3);
    test(0);
    test(-1);
}
