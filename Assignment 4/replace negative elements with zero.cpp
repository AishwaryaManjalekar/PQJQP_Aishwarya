#include<iostream>
using namespace std;
class ArrayExample

{
    int n,arr[20],count=0;
    int i,j,before,after;


    public:void accept()
    {
        cout<<"enter the size of an array:";
        cin>>n;
        cout<<"Enter the elements in an array :";

        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
    void display()
    {
    for(int j=0;j<n;j++)
        {
            if(arr[j]<0)
            {
                  arr[j]==0;
            }

        }
     cout<<"the array elements are "<<arr[j];
    }
};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



