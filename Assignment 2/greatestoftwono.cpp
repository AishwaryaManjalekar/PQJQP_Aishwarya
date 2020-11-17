#include<iostream>
using namespace std;
class Greater
{
    int num1,num2;
    public:void check()
    {
        cout<<"Enter 2 number:\n";
        cin>>num1>>num2;
        if(num1>num2)
            cout<<num1<<"\n"<< "Is greater:";
        else
            cout<<num2<<"\n"<<"Is greater:";
    }
};
int main()
{
    Greater compare;
    compare.check();
}

