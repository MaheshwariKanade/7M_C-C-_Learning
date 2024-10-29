//Class Template

#include<iostream>
using namespace std;
template <class t>
class calculator
{
public:
    t num1,num2;
    calculator(t n1,t n2)
    {
        num1=n1;
        num2=n2;
    }
    void displayResult()
    {
        cout<<"Addition = "<<add()<<endl;
        cout<<"Subtraction = "<<sub()<<endl;
        cout<<"Multiplication = "<<mul()<<endl;
        cout<<"Division = "<<div()<<endl<<endl<<endl;
    }
    t add()
    {
        return num1+num2;
    }
    t sub()
    {
        return num1-num2;
    }
    t mul()
    {
        return num1*num2;
    }
    t div()
    {
        return num1/num2;
    }
};

int main()
{
    calculator<int> i(21,4);
    calculator<float> f(21.78,4.63);
    cout<<"Calculation of integer numbers: "<<endl;
    i.displayResult();
    cout<<"Calculation of float numbers: "<<endl;
    f.displayResult();
}
