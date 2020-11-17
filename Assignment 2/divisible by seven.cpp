
#include<iostream>
using namespace std;
class Divisiblity
{
    int num;
    public:void Number()
    {
        cout<<"Enter the number :\n";
        cin>>num;
        if (num%7==0)
        cout<<num<<" It is divisible";
        else
        cout<<num<<" It is not divisible";
    }
};
int main()
{
    Divisiblity check;
    check.Number();
}

