#include<iostream>
using namespace std;
class Greater
{
    int num;
    public:void check()
    {
        cout<<"Enter number:";
        cin>>num;
        if(num>10)
            cout<<"Greater than 10:";
        else
            cout<<"Not Greater than 10:";
    }
};
int main()
{
    Greater compare;
    compare.check();
}
