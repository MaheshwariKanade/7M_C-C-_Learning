// Question 3

#include<iostream>
using namespace std;
class person
{
private:
    char name[20];
    int age;
    char country[15];
public:
    void setPersonDetails()
    {
        cout<<"Enter name:"<<endl;
        cin>>name;
        cout<<"Enter age:"<<endl;
        cin>>age;
        cout<<"Enter country name:"<<endl;
        cin>>country;
    }
    void getPersonDetails()
    {
        cout<<"The Person's Details are:"<<endl;
        cout<<"Name: "<<name<<endl<<"Age: "<<age<<endl<<"Country: "<<country<<endl;
    }
};
int main()
{
    person obj;
    obj.setPersonDetails();
    obj.getPersonDetails();
}
