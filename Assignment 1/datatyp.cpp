#include<iostream>
using namespace std;
class Datatypes
{
    int num1;
    char name[10];
    float num2;
    public:void print()
    {
        cout<<"Enter an integer : \n";
        cin>>num1;
        cout<<"The integer value is :\n"<<num1;
        cout<<"\n Enter your name : \n";
        cin>>name;
        cout<<"\n The name entered is :\n"<<name;
        cout<<"\n Enter the float no :\n";
        cin>>num2;
        cout<<"\n The float value entered is :\n"<<num2;
    }

};
int main()
{
    Datatypes details;
    details.print();
}
