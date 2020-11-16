#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,num3;
    public:void check()
    {
        cout<<"Enter 3 number:\n";
        cin>>num1>>num2>>num3;
        if(num1>num2&&num1>>num3)
            cout<<num1<< "Is greater:";
        else if(num2>num1&&num2>>num3)
            cout<<num2<<"Is greater:";
        else
          cout<<num3<<"Is greater:";
    }
};
int main()
{
    Greater compare;
    compare.check();
}

