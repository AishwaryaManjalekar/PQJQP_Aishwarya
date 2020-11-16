#include<iostream>
using namespace std;
class Greatest
{
    int choice;
    int num1,num2,sum,mul;
    public:void Number()
    {
          cout<<" 1. Adddition  2. Multiplication \n ";
          cin>>choice;
          int num1,num2;
          cout<<"Enter two numbers \n";
          cin>>num1>>num2;
          switch(choice)
          {
              case 1: int result;
                      result=num1+num2;
                       cout<<"result="<<result;break;
              case 2:result=num1*num2;
                    cout<<"result="<<result;break;
            default: cout<<"Invalid choice";
          }
    }
};
int main()
{
    Greatest value;
    value.Number();
}

