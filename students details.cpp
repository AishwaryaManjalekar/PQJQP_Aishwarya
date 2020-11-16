#include<iostream>
using namespace std;
class Students
{
    int marks;
    public:void result()
    {
        cout<<"Enter the marks of the student :";
        cin>>marks;
        if(marks>=90)
            cout<<"A GRADE";
        else if(marks>=80&&marks<90)
            cout<<"B GRADE";
        else if(marks>=60&&marks<80)
            cout<<"C GRADE";
        else if(marks>=45&&marks<60)
            cout<<"D GRADE";
        else
            cout<<"FAILED";

    }

};
int main()
{
    Students exam;
    exam.result();
}
