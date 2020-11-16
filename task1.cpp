#include<iostream>
using namespace std;
class Task
{
    int num1,num2,result;
    public:int add()
    {
        cout<<"Enter 2 no's ";
        cin>>num1>>num2;
        result=num1+num2;
        cout<<"The result is :"<<result;
        return(result);

    }
};
int main()
{
    Task code;
    code.add();
}
