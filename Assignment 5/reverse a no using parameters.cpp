#include<iostream>
using namespace std;
class Function
{
    int num,reminder=0,rev_num=0;
    public : int accept(int a)
    {
        cout<<"Enter a number";
        cin>>num;

     while(num!=0)
        {
           reminder =num%10;
           rev_num=rev_num*10+reminder;
           num /=10;
        }
        cout<<rev_num;
    }
};
int main()
{
    int num;
    Function f1;
    f1.accept(10);

}
