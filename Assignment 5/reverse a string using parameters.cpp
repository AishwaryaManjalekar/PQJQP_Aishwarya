#include<iostream>
using namespace std;
class Function
{
    int num,reminder,rev_num;
    public : int inc(int x)
    {
        cout<<"Enter a number";
        cin>>num;

     while(num!=0)
        {
           reminder =num%10;
           rev_num=rev_num*10+reminder;
           num /=10;
        }
        }
};
int main()
{
    int num;
    Function f1;
    f1.inc(num);
    cout<<num;
}
