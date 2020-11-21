#include<iostream>
using namespace std;
class Multiplication
{
    int arr[10];
    public : void accept()
    {
        cout<<"Enter the values in an array:\n";
        for (int i=0;i<5;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"the values in an array are\n";
        for(int i=0;i<5;i++)
        {
            cout<<arr[i]*2;
        }
    }

};
int main()
{
    Multiplication value;
    value.accept();
    value.display();
}
