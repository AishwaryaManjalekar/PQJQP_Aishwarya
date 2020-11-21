#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[20],i,j;
    int size=0,temp;
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
        int i,n;
        for(int i=0;i<arr[i];i++)
        {
            for(int j=i+1;j<i;j++)
            {
                if(arr[i]>arr[j])
                {
                    temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
                }
            }
        }

cout<<"The sorted elements are :";
        for(int i=0;i<size;i++)
        cout<<arr[i]<<"\t";
    }


};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



