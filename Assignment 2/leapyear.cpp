#include<iostream>
using namespace std;
class Year
{
    int num;
    public:void leapyear()
    {
        cout<<"Enter the year to be checked:\n";
        cin>>num;
        if (((num % 4 == 0) && (num % 100 != 0)) || (num % 400 == 0))
        cout<<num<<" is a leap year";
        else
        cout<<num<<" is not a leap year";
    }
};
int main()
{
    Year check;
    check.leapyear();
}

