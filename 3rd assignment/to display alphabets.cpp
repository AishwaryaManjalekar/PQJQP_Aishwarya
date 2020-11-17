#include<iostream>
using namespace std;
class Alphabets
{
    public:void display()
    {
        char a;
        for(a='A';a<='Z';a++)
        {

            cout<<a<<"\n";
        }
    }
};
int main()
{
    cout<<"THE NUMBERS ARE"<<"\n";
    Alphabets print;
    print.display();
}

