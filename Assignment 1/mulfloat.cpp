#include<iostream>
using namespace std;
class Calculator
{
    float num1,num2,num3,result;
    public:void mul()
    {
        cout<<"enter first no:\n";
        cin>>num1;
        cout<<"enter second no:\n";
        cin>>num2;
        cout<<"enter the third no :\n";
        cin>>num3;
        result=num1*num2*num3;
        cout<<"result:\n"<<result;
    }
};
int main()
{
   Calculator value;
   value.mul();
}
