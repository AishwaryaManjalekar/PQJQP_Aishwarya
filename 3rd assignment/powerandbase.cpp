#include<iostream>
using namespace std;
class Power
{
    public:void value()
    {
        float p,b,i,pow=1;
        cout<<"ENTER THE VALUE OF POWER :";
        cin>>p;
        cout<<"ENTER THE VALUE OF BASE:";
        cin>>b;
        for(i=p;i>0;i--)
        {
            pow=pow*b;
        }
        cout<<"The value is :"<<pow;

    };
};
int main()
{
    Power Numbers;
    Numbers.value();
}
