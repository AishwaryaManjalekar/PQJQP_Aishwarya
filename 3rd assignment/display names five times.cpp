#include<iostream>
using namespace std;
class Display
{


    public:void names()
    {
        int i;
        char name[20];
        cout<<"enter your name";
        cin>>name;
        for(i=0;i<5;i++)
        {
            cout<<name<<"\n";
        }
    }
};
int main()
{
    Display five;
    five.names();
}
