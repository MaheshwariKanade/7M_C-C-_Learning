// file handling - Write(ofstream) and Read(ifstream)

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char input[80];
    ofstream w;
    w.open("lmn.txt");
    cout<<"Enter your name:"<<endl;
    cin.getline(input,100);
    w<<input<<endl;
    cout<<"Enter your age:"<<endl;
    cin>>input;
    //cin.ignore();
    w<<input<<endl;
    w.close();

    ifstream r;
    string s;
    r.open("lmn.txt");
    cout<<"Reading from text file:"<<endl;
    while(getline(r,s))
    {
        cout<<s<<endl;
    }
    r.close();
    return 0;
}
