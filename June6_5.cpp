// Exception Handling using Catch All statements.
#include<iostream>
using namespace std;
void test(int x)
{
    try
    {
        if(x==0)
            throw x;
        if(x==-1)
            throw 'x';
        if(x==1)
            throw 1.0;
    }
    catch(...)     //3 dot is compulsory for catch all.Regardless of no.of throws (not for 3 throws.)
    {
        cout<<"caught an exception,that is: "<<x<<endl;
    }
}
int main()
{
    test(0);
    test(-1);
    test(1);
}
