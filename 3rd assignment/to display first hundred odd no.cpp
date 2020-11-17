#include<iostream>
using namespace std;
class Numbers
{


    public:void display()
    {
        int i;
        for(i=0;i<200;i++)
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
