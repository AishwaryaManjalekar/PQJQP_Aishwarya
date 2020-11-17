#include<iostream>
using namespace std;
class Numbers
{


    public:void display()
    {
        int i;
        for(i=1;i<=20;i++)
        {
            i=i+1;
            cout<<i<<"\n";
        }
    }
};
int main()
{
    cout<<"THE NUMBERS ARE"<<"\n";
    Numbers counting;
    counting.display();
}
