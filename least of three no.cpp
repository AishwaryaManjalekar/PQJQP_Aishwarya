#include<iostream>
using namespace std;
class Greater
{
    int num1,num2,num3;
    public:void check()
    {
        cout<<"Enter 3 number:\n";
        cin>>num1>>num2>>num3;
        if(num1<num2&&num1<num3)
            cout<<num1<< "Is the least of 3 no's:";
        else if(num2<num1&&num2<num3)
            cout<<num2<<"Is the least of 3 no's:";
        else
          cout<<num3<<"Is the least of 3 no's:";
    }
};
int main()
{
    Greater compare;
    compare.check();
}
