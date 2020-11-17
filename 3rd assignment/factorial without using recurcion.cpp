#include<iostream>
using namespace std;
class Factorial
{
    public: void number()
    {

    int n,i,fact=1;
        cout<<"Enter the number to be factorized";
        cin>>n;
        while(i<=n)
        {
        fact=fact*i;
        }
          cout<<"The value is :"<<fact;
    }

};
int main()
{
    Factorial value;
    value.number();
}
