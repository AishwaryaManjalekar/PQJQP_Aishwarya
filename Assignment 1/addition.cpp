#include<iostream>
using namespace std;
class calculator
 {
     int num1,num2,result;
      public:void add()
    {
        cout<<"Enter first no:\n";
        cin>>num1;
        cout<<"Enter second no:\n";
        cin>>num2;
        result=num1+num2;
        cout<<"Result:\n"<<result;
    }
 };
 int main()
 {
     calculator value;
     value.add();
 }
