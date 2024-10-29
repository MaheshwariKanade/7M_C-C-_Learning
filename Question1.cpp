// Question 1- 10/06/2024

#include<iostream>
using namespace std;
int na=0,nm=0;

class fruit
{
public:
    int calculate;
    char fruits[8]={'a','m','a','a','a','m','m','a'};
    // here  'a' represents apples, 'm' represents mangoes
    void cal()
    {
        calculate=na+nm;
        cout<<"Total number of fruits:"<<calculate;
    }
};
class apples:fruit
{
public:
    int i;
    void calculate_apple()
    {
        for(i=0;i<8;i++)
        {
            if(fruits[i]== 'a')
        {
            na++;
        }
        }
        cout<<"The total number of apples:"<<na<<endl;
    }

};
class mangoes:fruit
{
public:
    int i;
    void calculate_mango()
    {
        for(i=0;i<8;i++)
        {
            if(fruits[i]== 'm')
        {
            nm++;
        }
        }
        cout<<"The total number of mangoes:"<<nm<<endl;

    }
};
int main()
{
    fruit f;
    apples a;
    a.calculate_apple();
    mangoes m;
    m.calculate_mango();
    f.cal();
}

