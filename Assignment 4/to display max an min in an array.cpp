#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[10];
    int size=0;
    int max=0;
    int min=0;

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

                max=arr[0];
                for(int i=0;i<size;i++)

                {
                    if(max<arr[i])
                        max=arr[1];
                }
              /*  min=arr[0];
                for(int i=0;i<size;i++)

                {
                    if(min>arr[i])
                        min=arr[i];
                }*/

                cout<<"The maximum is :"<<max;
               // cout<<"\n The minimum is :"<<min;
        }

};
int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}



