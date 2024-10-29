// Encapsulation-3 June 2024

#include<iostream>
using namespace std;
class employee
{
public:
    int id,age;
    char name[20];
    char city[20];
    char email[25];
    char phone[11];
    char dept[20];
    double sal;
    void getdetails()
    {
        cout<<"Employee id: "<<id<<"\t"<<"Employee name: "<<name<<"\t"<<"Employee age: "<<age<<"\t"<<"Employee phone: "<<phone<<endl;
    }
    void empdet()
    {
        cout<<"Employee name: "<<name<<"\t"<<"Employee email: "<<email<<"\t"<<"Employee city: "<<city<<"\t"<<"Employee phone: "<<phone<<endl;
    }
    void empdetails()
    {
        cout<<"Employee name: "<<name<<"\t"<<"Employee dept: "<<dept<<"\t"<<"Employee salary: "<<sal<<endl;
    }
};
int main()
{
    employee e={100,32,"XYZ","Pune","xyz.@example.com","94235671","HR dept",20000.98};
    e.getdetails();
    e.empdet();
    e.empdetails();
}
