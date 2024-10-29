// 2) 21 May 2024 ==>OOP's: function with parameter and no return

#include<iostream>
using namespace std;

void display(int,char,char);

class student
{
public:
    void display(int r,char n[10],char p[10])
    {
        cout<<"Roll no.: "<<r<<endl;
        cout<<"Name: "<<n<<endl;
        cout<<"Phone: "<<p<<endl;
    }
};

int main()
{
    student s1;
    s1.display(1,"abc","12345");
    return 0;
}
