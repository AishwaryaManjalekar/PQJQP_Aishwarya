#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[10];
    int size=0;
    int odd=0,even=0;

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
        {
            for(int i=0;i<size;i++)
                {
                    if(arr[i]%2==0)
                      even++;
                     else
                      odd++;
                }
                cout<<"The even count is :"<<even;
                cout<<"\n The odd  count is :"<<odd;
        }
    }

};
int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}


