#include<iostream>
using namespace std;
class Variables
{
    int a;
    public:void accept()
    {
        cout<<"enter an integer:";
        cin>>a;
        int *p;
        p=&a;
        cout<<"the address of the variable is :"<<p;

    }
};
int main()
{
    Variables v1;
    v1.accept();
}
