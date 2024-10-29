// Hierarchical Inheritance- Bank Example

#include<iostream>
using namespace std;
class bank
{
public:
    char username[20];
    char password[10];
    float balance;
    void login()
    {
        cout<<"Enter Username: "<<endl;
        cin>>username;
        cout<<"Enter Password: "<<endl;
        cin>>password;
        cout<<"Enter balance: "<<endl;
        cin>>balance;
    }
};
class user_details:public bank
{
public:
    char name[20];
    char phone[11];
    void details()
    {
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter phone: "<<endl;
        cin>>phone;
    }
    void display()
    {
        cout<<"Your Username is: "<<username<<endl;
        cout<<"Your Balance is: "<<balance<<endl;
        cout<<"Your name is: "<<name<<endl;
        cout<<"Your phone is: "<<phone<<endl;
    }
};
class withdraw:public bank
{
public:
    float amount;
    void withdraw_amount()
    {
        if(balance>=amount)
        {
            cout<<"Enter amount"<<endl;
            cin>>amount;
            cout<<"you have sufficient balance to withdraw amount"<<endl;
            balance=balance-amount;
            cout<<"your balance after withdraw is: "<<balance<<endl;
        }
        else
        {
            cout<<"you do have sufficient balance to withdraw amount"<<endl;
        }
    }
};
int main()
{
    user_details u1;
    u1.login();
    u1.details();
    u1.display();
    withdraw w1;
    w1.withdraw_amount();
}

