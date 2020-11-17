#include<iostream>
using namespace std;
class Fibonacci
{
    public:void counting()
    {
        int n1=0,n2=1,n3,i,number;
        cout<<"enter the series of number:";
        cin>>number;
        cout<<n1<<""<<n2<<"";
        for(i=2;i<=number;i++)
        {

        n3=n1+n2;
        cout<<"\n"<<n3<<"\n";
        n1=n2;
        n2=n3;
        }

    }

};
int main()
{
    Fibonacci value;
    value.counting();
}
