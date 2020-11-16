#include<iostream>
using namespace std;
class InEquality

{
    int num1,num2;
    public:void compare()
    {
        cout<<"Enter 2  the number:";
        cin>>num1>>num2;
        if (num1!=num2)
            cout<<"The entered no is unequal :";
        else
            cout<<"The entered no is equal :";
    }

};
int main()
{
    InEquality check;
    check.compare();
}
