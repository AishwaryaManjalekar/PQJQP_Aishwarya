#include<iostream>
using namespace std;
class Comparision
{
    int arr[10],n,i,max,min;
    public : void values()
    {
        cout<<"enter  no of elements in an array:";
        cin>>n;
        cout<<"enter the elements of an array:";
        for(i=0;i<n;i++)
        cin>>arr[i];
        max =arr[0];
        for(i=0;i<n;i++)
        {
            if (max<arr[i])
                max = arr[i];
        }
         min =arr[0];
        for(i=0;i<n;i++)
        {
            if (min>arr[i])
                min = arr[i];
        }
        cout<<"Maximum value  \t"<<max;
        cout<<"\nMinimum value \t"<<min;
    }
};
int main()
{
     Comparision arrays;
     arrays.values();
}
