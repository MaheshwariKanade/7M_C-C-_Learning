// Exception Handling using function

#include<iostream>
using namespace std;
void divide(int x,int y,int z)
{
    double d;
    if((x-y)!=0)
    {
        d=z/(x-y);
        cout<<"Division is:"<<d<<endl;
    }
    else
    {
        throw(x-y);
    }
}
int main()
{
    try
    {
        divide(25,12,56);
        divide(30,20,60);
        divide(10,10,40);
        divide(5,2,15);
    }
    catch(int e)
    {
        cout<<"Caught an exception, can not divide any number by zero";
    }
}
