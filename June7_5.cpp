// read

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream r("trial.cpp");
    if(r.is_open())
    {
        while(getline(r,s))
        {
            cout<<s<<endl;
        }
        r.close();
    }
}
