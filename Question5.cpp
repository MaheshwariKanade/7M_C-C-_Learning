// Question 5

#include<iostream>
using namespace std;
class employee
{
public:
    int id;
    char name[20];
    char department[20];
    char phone[11];
    char email[20];
    char city[10];
    double salary;

    void getEmpDet()
    {
        cout<<"Enter the following details of employee"<<endl;
        cout<<"1.Employee Name"<<endl;
        cin>>name;
        cout<<"2.Employee id"<<endl;
        cin>>id;
        cout<<"3.Department"<<endl;
        cin>>department;
        cout<<"4.phone"<<endl;
        cin>>phone;
        cout<<"5.email"<<endl;
        cin>>email;
        cout<<"6.city"<<endl;
        cin>>city;
        cout<<"7.salary"<<endl;
        cin>>salary;
    }
    void displayEmpDet()
    {
        cout<<"The employee details are:"<<endl;
        cout<<"1.name: "<<name<<endl<<"2.Employee id: "<<id<<endl<<"3.Department: "<<department<<endl<<"4.phone: "<<phone<<endl<<"5.email: "<<email<<endl<<"6.city: "<<city<<endl<<"7.salary: "<<salary<<endl;
    }
};
int main()
{
    employee e;
    e.getEmpDet();
    e.displayEmpDet();
}
