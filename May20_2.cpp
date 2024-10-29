// 2) Arithmetic calculation program.

#include<iostream>      // input-output
#include<iomanip>       //setprecision
using namespace std;
int main()
{
    double x,y,add,sub,mul,div;
    cout<<"Enter two numbers"<<endl;
    cin>>x>>y;
    add=x+y;
    sub=x-y;
    mul=x*y;
    div=x/y;
    cout<<"Addition is: "<<add<<endl;
    cout<<"Subtraction is: "<<sub<<endl;
    cout<<"Multiplication is: "<<mul<<endl;
    cout<<"Division is: "<<setprecision(2)<<div<<endl;
    //set precision: point chya nantr kiti digits..
    return 0;
}
