#include<iostream>
using namespace std;
class calculator
{
    int num1,num2,result;
    public:void add()
    {
        cout<<"enter first no:\n";
        cin>>num1;
        cout<<"enter second no:\n";
        cin>>num2;
        result=num1+num2;
        cout<<"result:\n"<<result;
    }
   void sub()
    {
        cout<<"\nenter first no:\n";
        cin>>num1;
        cout<<"enter second no:\n";
        cin>>num2;
        result=num1-num2;
        cout<<"result:\n"<<result;
    }
};
int main()
{
calculator c1;
c1.add();
c1.sub();
}
