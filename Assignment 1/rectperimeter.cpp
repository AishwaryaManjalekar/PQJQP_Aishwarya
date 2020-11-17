#include<iostream>
using namespace std;
class calculate
{
    float l,w,area,perimeter;
    public:void rectangle()
    {
        cout<<"Enter the value of length : \n";
        cin>>l;
        cout<<"Enter the value of width : \n";
        cin>>w;
        area=l*w;
        perimeter=2*(l+w);
        cout<<"The area of the square is : \n"<<area;
        cout<<"\n The area of the perimeter is :\n"<<perimeter;
    }
};
int main()
{
    calculate value;
    value.rectangle();
}
