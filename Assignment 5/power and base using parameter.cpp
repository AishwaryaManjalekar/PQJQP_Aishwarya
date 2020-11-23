#include<iostream>
using namespace std;
class Powerbase
{
    int i,b,p,pow=1;
    public : void accept(int p,int b)
    {
    cout<<"ENTER THE VALUE OF POWER :";
    cin>>p;
    cout<<"ENTER THE VALUE OF BASE:";
    cin>>b;
    for(i=1;i<=p;i++)

        pow=pow*b;
        cout<<pow;

    }

};
int main()
{
    Powerbase value;
    value.accept(2,3);

}
