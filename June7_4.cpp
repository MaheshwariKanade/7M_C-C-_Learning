// write

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream w("trial.cpp");
    if(w.is_open())
    {
        w<<"Good Morning"<<endl<<"Good afternoon"<<endl<<"Good night"<<endl;
    }
    else
    {
        cout<<"file opening is failed.";
    }
}
