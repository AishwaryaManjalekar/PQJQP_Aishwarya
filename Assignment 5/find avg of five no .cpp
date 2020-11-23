#include<iostream>
using namespace std;
class Hundred
{
    int avg;
    public:void value(int a ,int b,int c,int d,int e)
    {
        cout<<"Enter the 5 no's :";
        cin>>a>>b>>c>>d>>e;
        avg=(a+b+c+d+e)/5;
        cout<<"The avg value is :"<<avg;
        if(avg>100)
        {
            cout<<"\n The entered value is greater than hundred:";
        }
        else
        {
            cout<<"The entered value is not greater than hundred:";
        }
    }
};
int main()
{
  Hundred v1;
  v1.value(1,2,3,4,5);
}
