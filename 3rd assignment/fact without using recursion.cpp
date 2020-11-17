#include<iostream>
using namespace std;
class Factorial
{
    public : void number()

    {


    int i ,fact=1,num;


     cout<<"Enter a positive no";
     cin>>num;
     for(i=1;i<=num;i++)
     {
         fact=fact*i;
     }
     cout<<"factorial of a number is:"<<"\n"<<fact;

    };
};
int main()
{
    Factorial value;
    value.number();
}
