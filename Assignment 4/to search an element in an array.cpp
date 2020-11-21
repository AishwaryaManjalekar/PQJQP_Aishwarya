#include<iostream>
using namespace std;
class Search
{
    int arr[20],n,i,size=0;
    int data=0,position;
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

    void displaydata()
    {
        cout<<"\n Enter the array element to be searched :";
        cin>>n;
        for(i=0;i<size;i++)
        {
            if(arr[i]==n)
            {
            data=1;
            position=i+1;
            break;
            }
        }
        if(data==0)
        {
            cout<<"element not found:";
        }
        else
            cout<<"\n Element "<<n<<" found in the position --------"<<position;
    }
};
int main()
{
    Search value;
    value.acceptdata();
    value.displaydata();
}
