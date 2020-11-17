#include<iostream>
using namespace std;
class Number
{
    int num;
    public:void check()
    {
        cout<<"Enter number:";
        cin>>num;
        if(num>0)
            cout<<"The value entered is positive:";
        else if(num<0)
            cout<<"The value entered is negative:";
            else
                cout<<"the value entered is zero:";
    }
};
int main()
{
    Number compare;
    compare.check();
}

