// 2. constructor and destructor counter

#include<iostream>
using namespace std;
int cnt=0;
int main()
{
    class counter
    {
    public:
        counter()
        {
            cnt++;
            cout<<"Value of counter in constructor is: "<<cnt<<endl;
        }
        ~counter()
        {
            cout<<"Value of counter in destructor is: "<<cnt<<endl;
            cnt--;
        }
    };
    counter c1,c2,c3,c4,c5;
}
