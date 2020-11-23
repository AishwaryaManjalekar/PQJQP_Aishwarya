#include<iostream>
using namespace std;
class Calculator
{
    int n,num1,num2;
    int sum=0,sub=0,mult=1,div=0;
    public :Calculator()
    {
        cout<<"------CALCULATOR-------";

    };
    void accept()
    {
        cout<<"\n CHOOSE ANY OF THE OPTION YOU PREFER:";
        cout<<"\n 1.Addition 2.Substraction 3.Multiplication 4.Division \n";
        cin>>n;
        switch(n)
        {
            case 1:cout<<"\nWelcome to addition";
                  cout<<"\nEnter 2 no's to be added:\n";
                  cin>>num1>>num2;
                  sum=num1+num2;

                  cout<<"The sum of the numbers is :\t"<<sum;
            case 2:cout<<"\nWelcome to Substraction";
                  cout<<"\nEnter 2 no's to be substraction:\n";
                  cin>>num1>>num2;
                  sub=num1-num2;

                  cout<<"The substraction of the numbers is :\t"<<sub;
            case 3:cout<<"\nWelcome to Multiplication";
                  cout<<"\nEnter 2 no's to be Multiplication:\n";
                  cin>>num1>>num2;
                  mult=num1*num2;
                  cout<<"The multiplication of the numbers is :\t"<<mult;

            case 4:cout<<"\nWelcome to Division";
                  cout<<"\nEnter 2 no's to be division:\n";
                  cin>>num1>>num2;
                  div=num1%num2;
                  cout<<"The division of the numbers is :\t"<<div;

            default:
            cout<<"Invalid choice:";
        }
    }

};
int main()
{
    Calculator c1;
    c1.accept();
}
