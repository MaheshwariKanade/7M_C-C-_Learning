// 1) 21 May 2024 ==>OOP's: simple function

#include<iostream>
using namespace std;

class student
{
public:
    int rno;
    char name[10];
    char phone[10];

    void display()
    {
        cout<<"Student information is:"<<endl;
        cout<<"Roll number: "<<rno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Phone number: "<<phone<<endl;
    }
};
int main()
{
    student s1={1,"abc","26543"};
    s1.display();
    student s2;
    cout<<"Enter roll no,name,phone:"<<endl;
    cin>>s2.rno>>s2.name>>s2.phone;
    s2.display();
    return 0;
}
