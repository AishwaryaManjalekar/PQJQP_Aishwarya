#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[10];
    int size=0;

    public:void accept()

    {
        cout<<"Enter the number of elements in an array:";
        cin>>size;
        cout<<"enter the array elements";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
        cout<<"the odd elements are :";
        for(int i=0;i<size;i++)
        {
            if(arr[i]%2!=0)
            {
                cout<<arr[i]<<"\n";
            }
        }
    }

};
int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}

