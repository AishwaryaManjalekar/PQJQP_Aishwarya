#include<iostream>
using namespace std;
class Employee
{
    char name[20],location[20];
    long int emp_id,phone_no;
    public:void accept()
    {
        cout<<"Enter the name of the employee :";
        cin>>name;
        cout<<"Enter the location of the employee :";
        cin>>location;
        cout<<"Enter the emp_id of the employee :";
        cin>>name;
        cout<<"Enter the phone_no of the employee :";
        cin>>phone_no;
    }
    void display()
    {
        cout<<"------------DETAILS OF EMPLOYEE ---------------:"<<"\n";
        cout<<"Name ="<<name<<"\n";
        cout<<"location="<<location<<"\n";
        cout<<"Employee id="<<emp_id<<"\n";
        cout<<"phone no="<<phone_no<<"\n";
    }
};
    int main()
    {
           Employee details;
           details.accept();
           details.display();
           Employee details1;
           details1.accept();
           details1.display();
    }
