#include<iostream>
using namespace std;
class Numbers
{
     public:void display()
    {
        int i,n;
        cout<<"enter an integer";
        cin>>n;
        for( i=1;i<=10;i++)
        {
            cout<<n<<"*"<<i<<"="<<n*i<<"\n";
        }
    }
};
int main()
{
    cout<<"THE NUMBERS ARE"<<"\n";
    Numbers counting;
    counting.display();
}

