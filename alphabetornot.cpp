#include<iostream>
using namespace std;
class Verification
{
    char a;
    public:void alpha()
    {
        cout<<"press any key to check if is alphabet or not:";
        cin>>a;
        if((a<='a'&&a>'a')||(a<='A'&&a>'Z'))
        {
            cout<<"It is an alphabet:";
        }
        else
        {

            cout<<"It is not an alphabet:";
        }
    }
};
int main()
{
    Verification alpha1;
    alpha1.alpha();
}
