#include<iostream>
using namespace std;
class Numbers
{
    public:void display()
    {
        int i,sum=0;
        for(i=1;i<=10;i++)
        {

            cout<<i<<"\n";
            sum=sum+i;

        }
        cout<<"the sum of first 10 no is \n "<<sum;
    }
};
int main()
{
    cout<<"THE NUMBERS ARE"<<"\n";
    Numbers counting;
    counting.display();
}

