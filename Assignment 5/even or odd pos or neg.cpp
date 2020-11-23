#include<iostream>
using namespace std;
class Implement
{
    public:void value(int a)
    {
        cout<<"Enter a no :";
        cin>>a;
        if(a>0)
        {
        cout<<"The no value is positive :"<<a;
        }
        else
        {
        cout<<"\nThe no is negative :"<<a;
        }
        if(a%2==0)
        {
        cout<<"\nThe no is even :"<<a;
        }
        else
        {
        cout<<"\nThe no is odd :"<<a;
        }
    }
};
int main()
{
  Implement v1;
  v1.value(1);
}
