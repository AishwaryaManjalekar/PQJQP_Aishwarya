#include<iostream>
using namespace std;
class Swapping
{
    int num1,num2;
    public:void numbers()
    {
        cout<<"enter 2 no to be swapped:\n";
        cin>>num1>>num2;
        num1=num1+num2;
        num2=num1-num2;
        num1=num1-num2;
        cout<<"The swapped no is :"<<num1<<num2;
    }
};
int main()
{
    Swapping value;
    value.numbers();
}
