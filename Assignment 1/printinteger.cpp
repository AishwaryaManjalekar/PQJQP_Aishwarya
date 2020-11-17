#include<iostream>
using namespace std;
class Print
{
    int num1;
    public:void accept_data()
    {
        cout<<"Enter the integer:\n";
        cin>>num1;
        cout<<"The integer is:\n"<<num1;
    }
};
int main()
{
    Print number;
    number.accept_data();
}
