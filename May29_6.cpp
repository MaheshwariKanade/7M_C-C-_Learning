// Multilevel Inheritance (parent->child->child->...)

#include<iostream>
using namespace std;
class student
{
public:
    int rno;
    char name[20];
    void getinfo()
    {
        cout<<"Enter Roll number and Name:"<<endl;
        cin>>rno>>name;
    }
};
class city:public student
{
public:
    char city[20];
    void getcity()
    {
        cout<<"Enter city:"<<endl;
        cin>>city;
    }
};
class details:public city
{
public:
    char email[20];
    char phone[11];
    void getdetails()
    {
        cout<<"Enter email and phone:"<<endl;
        cin>>email>>phone;
    }
    void disply()
    {
        cout<<"Student Details are:"<<endl;
        cout<<"Roll number:"<<rno<<endl;
        cout<<"Name:"<<name<<endl;
        cout<<"City:"<<city<<endl;
        cout<<"Email:"<<email<<endl;
        cout<<"Phone:"<<phone<<endl;
    }
};
int main()
{
    details d;
    d.getinfo();
    d.getcity();
    d.getdetails();
    d.disply();
}


