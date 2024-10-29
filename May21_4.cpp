// 4) 21 May 2024 ==>OOP's: function with return and argument

#include<iostream>
using namespace std;

class student
{
public:
    int tot;
    int display(int s1,int s2)
    {
        tot=s1+s2;
        return tot;
    }
};
int main()
{
    student s1;
    cout<<"Total:"<<s1.display(67,78);

}
