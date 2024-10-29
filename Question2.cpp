//Question 2

#include<iostream>
using namespace std;
class addAmount
{
public:
    int amount=50;
    addAmount()
    {
        amount=amount+0;
    }
    addAmount(int n)
    {
        amount=amount+n;
    }
    void display()
    {
        cout<<"The Total amount is:"<<amount;
    }
};
int main()
{
    addAmount obj(50); // User want to add 50 doller to the existing amount.
    obj.display();
}
