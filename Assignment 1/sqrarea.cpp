#include<iostream>
using namespace std;
class calculate
{
    float s1,s2,area;
    public:void square()
    {
        cout<<"Enter the value of width : \n";
        cin>>s1;
        cout<<"Enter the value of height : \n";
        cin>>s2;
        area=s1*s2;
        cout<<"The area of the square is : \n"<<area;
    }
};
int main()
{
    calculate value;
    value.square();
}
