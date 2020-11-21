#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[20];
    int size=0,second,largest;


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
        if(arr[0]>arr[1])
        {
            largest=arr[1];
            second=arr[0];
        }
        else
        {
            largest=arr[0];
            second =arr[1];
        }
        for(int i=2;i<size;i++)
        {
          if(arr[i]>largest)
          {
              second=largest;
              largest=arr[i];
          }
        else
          {
            (arr[i] > second && arr[i] != largest);
         second = arr[i];
          }
        }cout<<"Second Largest Element in array is: "<<second;
    }


};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



