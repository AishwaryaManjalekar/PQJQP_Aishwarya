#include<iostream>
using namespace std;
class Voting
{
    int num;
    public:void age()
    {
        cout<<"Enter your age:";
        cin>>num;
        if(num>=18)
            cout<<"Eligible to vote:";
        else
            cout<<"Not eligible:";
    }
};
int main()
{
    Voting eligible;
    eligible.age();
}
