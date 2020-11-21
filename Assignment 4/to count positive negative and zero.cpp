#include<iostream>
using namespace std;
class ArrayExample

{
    int arr[10];
    int size=0;
    int zero=0,pos=0,neg=0;

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
                    if(arr[i]>0)
                      pos++;
                     else if (arr[i]<0)
                        neg++;
                     else
                        zero++;
                }
                cout<<"The positive count is :"<<pos;
                cout<<"\n The negative  count is :"<<neg;
                cout<<"\n The zero count is :"<<zero;
        }
    }

};
int main()
{
    ArrayExample v1;
    v1.accept();
    v1.display();
}


