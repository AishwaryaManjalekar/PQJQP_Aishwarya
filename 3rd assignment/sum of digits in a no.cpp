#include<iostream>
using namespace std;
class Factorial
{
    public : void number()
    {
    int num,rem,sum=0;
    cout<<"enter a number to find the sum";
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    cout<<sum;
    };
};
int main()
{
    Factorial value;
    value.number();
}
