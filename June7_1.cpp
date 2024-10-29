// file handling -write

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream f("xyz.txt");
    if(f.is_open())
    {
        f<<"Welcome to cpp file handling"<<endl<<"This is written in xyz.text file through file handling";
    }
    else
    {
        cout<<"File opening is fail.";
    }
    return 0;
}
