// 3) 21 May 2024 ==>OOP's: function with return but no argument

#include<iostream>
using namespace std;

class student
{
public:
    int s1,s2,tot;

    int display()
    {
        tot=s1+s2;
        return tot;
    }
};
int main()
{
    student s1={89,78};
    cout<<"Total:"<<s1.display();
}

