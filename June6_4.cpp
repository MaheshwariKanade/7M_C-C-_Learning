// Exception Handling using Multiple Try statements.

#include<iostream>
using namespace std;
void divide(double x,double y)
{
    try
    {
        if(y==0.0)
        {
            throw y;
        }
        else
        {
            cout<<"Division is: "<<x/y<<endl;
        }
    }
    catch(double)
    {
        cout<<"Caught an exception in function"<<endl;
        throw;   //this throw is written for catch stmt in main function.
    }
}
int main()
{
    try
    {
        divide(28.6,7.6);
        divide(1.9,0);
    }
    catch(double)
    {
        cout<<"Caught an exception in main function"<<endl;
    }
}
