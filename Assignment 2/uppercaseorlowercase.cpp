#include<iostream>
using namespace std;
class Verification
{
    char a;
    public:void uplow()
    {
        cout<<"press any key to check if is uppercase or lowercase:";
        cin>>a;
        if(a<='A'&&a>'Z')
            cout<<"It is in uppercase:";
        else
            cout<<"It is in lowercase:";
    }
};
int main()
{
    Verification check ;
    check.uplow();
}
