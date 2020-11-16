#include<iostream>
using namespace std;
class Task
{
    public:void accept(int num1,int num2)
    {
        cout<<"The parameters entered are :"<<num1<<num2;
    }
};
int main()
{
    int num1,num2;
    cout<<"Enter 2 no's ";
    cin>>num1>>num2;
    Task parameters;
    parameters.accept(num1,num2);
}

