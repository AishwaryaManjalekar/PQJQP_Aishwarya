#include<iostream>
using namespace std;
class Evenorodd

{
    int num;
    public:void value()
    {
        cout<<"Enter the number:";
        cin>>num;
        if (num%2==0)
            cout<<"The entered no is even :"<<num;
        else
            cout<<"The entered no is odd :"<<num;
    }

};
int main()
{
    Evenorodd v1;
    v1.value();
}
