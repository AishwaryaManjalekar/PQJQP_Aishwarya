#include<iostream>
using namespace std;
class Numbers
{
    public:void display()
    {
        int i;
        for(i=10;i>=0;i--)
        {
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
