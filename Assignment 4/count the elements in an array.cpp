#include<iostream>
using namespace std;
class ArrayExample

{
    int n,arr[20],co=0;
    int i;


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
     cout<<"The sum of the array are:";

      cout<<"the sum is:"<<n;
    }

};


int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



