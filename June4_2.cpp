// Friend Class

#include<iostream>
#include<string.h>
using namespace std;

class student
{
private:
    int rno;
    friend class name;
public:
    student()
    {
        rno=5;
    }
    void disp()
    {
        cout<<"hello!!"<<endl;
    }
};

class name
{
private:
    char sname[20];
public:
    name()
    {
        strcpy(sname, "ABC");
    }
    void display()
    {
        student s;
        s.disp();
        cout<<"Student roll no.= "<<s.rno<<endl;
        cout<<"Student name= "<<sname<<endl;
    }
};

int main()
{
    name obj;
    obj.display();
}
