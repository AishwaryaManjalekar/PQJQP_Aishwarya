#include<iostream>
using namespace std;
class calculate
{
    float r,area,pi=3.142;
    public:void circle()
    {
        cout<<"Enter the value of radius : \n";
        cin>>r;
        area=pi*r*r;
        cout<<"The area of the circle is : \n"<<area;
    }
};
int main()
{
    calculate value;
    value.circle();
}

