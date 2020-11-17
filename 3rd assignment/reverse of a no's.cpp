#include<iostream>
using namespace std;
class Numbers
{
    public:void display()
    {
        int n, rev_num=0,reminder;
        cout<<"Enter a no:";
        cin>>n;
        while(n!=0)
        {
           reminder =n%10;
           rev_num=rev_num*10+reminder;
           n /=10;
        }
        cout<<"reversed number ="<<rev_num;
    }
};
int main()
{
    Numbers counting;
    counting.display();
}

