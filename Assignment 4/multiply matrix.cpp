#include<iostream>
using namespace std;
class ArrayExample
{
    int arr[20],mul=1;
    int n,i;
    public:void accept()
    {
        cout<<"enter the size of array 1:";
        cin>>n;
     for(i=0;i<n;i++)
     {

        cout<<"enter the array elements:";
        cin>>arr[i];
     }
    }
    void display()
    {
        for(i=0;i<n;i++)
        {

            mul*=arr[i];

        }
      cout<<mul;
    }

};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



