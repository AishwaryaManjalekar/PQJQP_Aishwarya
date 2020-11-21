#include<iostream>
using namespace std;
class ArrayExample

{
    int n,arr1[20],arr2[20],sum[20];
    int i,j;


    public:void accept()

    {
        cout<<"enter the size of an array:";
        cin>>n;
        cout<<"Enter the elements in an array 1:";

        for(int i=0;i<n;i++)
        {
            cin>>arr1[i];
        }

        cout<<"Enter the elements in an array 2:";


        for(int j=0;j<n;j++)
        {
            cin>>arr2[i];
        }
    }
    void display()
    {
     cout<<"The sum of the array are:";
     for(int i=0;i<n;i++)
        {
            sum[i]=arr1[i]+arr2[i];
             cout<<sum[i]<<"\n";

        }

    }

};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



