#include<iostream>
using namespace std;
class Equality

{
    int num1,num2;
    public:void compare()
    {
        cout<<"Enter 2  the number:";
        cin>>num1>>num2;
        if (num1==num2)
            cout<<"The entered no is equal :";
        else
            cout<<"The entered no is not equal :";
    }

};
int main()
{
    Equality check;
    check.compare();
}
