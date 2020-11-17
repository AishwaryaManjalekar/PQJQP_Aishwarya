#include<iostream>
using namespace std;
class calculator
{
    int num1;
    public:void inc()
    {
        cout<<"Enter the number : \n";
        cin>>num1;
        cout<<"After incrementing the value is : \n"<<num1+7;
    }
};
int main()
{
    calculator value;
    value.inc();
}

