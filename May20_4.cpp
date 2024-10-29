// 4) Switch conditional Statement program.

#include<iostream>
using namespace std;
int main()
{
    char c;
    cout<<"Enter a letter from a to g."<<endl;
    cin>>c;
    switch(c)
    {
    case 'a':
        cout<<"monday";
        break;
    case 'b':
        cout<<"tuesday";
        break;
    case 'c':
        cout<<"Wednesday";
        break;
    case 'd':
        cout<<"Thursday";
        break;
    case 'e':
        cout<<"Friday";
        break;
    case 'f':
        cout<<"Saturday";
        break;
    case 'g':
        cout<<"Sunday";
        break;
    default:
        cout<<"Enter a letter from a to g.";
    }
    return 0;
}
