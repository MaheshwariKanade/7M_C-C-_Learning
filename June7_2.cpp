// file handling - Read

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string s;
    ifstream f("xyz.txt");
    if(f.is_open())
    {
        while(getline(f,s))
        {
            cout<<s<<endl;
        }
        f.close();
    }
    else
    {
        cout<<"file opening is failed.";
    }
    return 0;
}
