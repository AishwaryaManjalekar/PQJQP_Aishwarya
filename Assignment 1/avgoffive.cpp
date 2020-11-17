#include<iostream>
using namespace std;
class calculator
{
    int num1,num2,num3,num4,num5,result;
    public:void avg()
    {
        cout<<"enter first no:\n";
        cin>>num1;
        cout<<"enter second no:\n";
        cin>>num2;
        cout<<"enter third no:\n";
        cin>>num3;
        cout<<"enter four no:\n";
        cin>>num4;
        cout<<"enter fifth no:\n";
        cin>>num5;
        result=(num1+num2+num3+num4+num5)/5;
        cout<<"result:\n"<<result;
    }
};
int main()
{
    calculator value;
    value.avg();
}
