// Function Template

#include<iostream>
using namespace std;
template <typename datatype>
datatype add(datatype num1,datatype num2)
{
    return num1+num2;
}
int main()
{
    int result1;
    double result2;
    result1=add<int>(22,42);
    cout<<"Addition of integer number is:"<<result1<<endl;
    result2=add<double>(22.98,42.32);
    cout<<"Addition of float number is:"<<result2<<endl;
}
