#include<iostream>
using namespace std;
class Palindrom
{
    public:void display()
    {
        int n, num,digit,rev;
        cout<<"Enter a positive no:";
        cin>>num;

        n=num;
        do
        {
            digit = num%10;
            rev =(rev*10)+digit;
            num=num/10;
        }
        while (num!=0);
        cout<<"The reverse of a number is:"<<rev<<"\n";

        if (n==rev)
            cout<<"the number is palindrom";
            else
            cout<<"the number is not a palindrom";
    }
};
int main()
{
    Palindrom Numbers ;
    Numbers.display();
}

