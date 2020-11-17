#include<iostream>
using namespace std;
class Calculate
{
    float SI,p,r,t;
    public:void simpleinterest()
    {
        cout<<"Enter the value of principle : \n";
        cin>>p;
        cout<<"Enter the value of rate : \n";
        cin>>r;
        cout<<"Enter the value of time : \n";
        cin>>t;
        SI=(p*r*t)/100;
        cout<<"The simple interest is : \n"<<SI;
    }
};
int main()
{
    Calculate value;
    value.simpleinterest();
}
