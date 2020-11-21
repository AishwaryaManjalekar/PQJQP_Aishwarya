#include<iostream>
using namespace std;
class Search
{
    int arr[20],n,i,size=0;
    int data=0,a,temp;
    public:void acceptdata()
    {
        cout<<"\n Enter the size of an array:";
        cin>>size;
        cout<<"\n Enter the array elements \n";
        for(int i=0;i<size;i++)
        {
            cin>>arr[i];
        }
    }

    void replacedata()
    {
        cout<<"\n The array element before replacement are:";
       for(int i=0;i<size;i++)
        {
            cout<<"\n"<<arr[i];
        }
         cout<<"\n after replacement:";
         {
             for(i=0;i<size;i++)
             {

             }
            cout<<arr[i];
            i++;
         }
    }
};
int main()
{
    Search value;
    value.acceptdata();
    value.replacedata();
}
