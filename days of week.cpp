#include<iostream>
using namespace std;
class Days
{
    int choice;
    public:void number()
    {
    cout<<"Enter the day";
    cin>>choice;
    switch(choice)
    {
      case 1:cout<<"Sunday";break;
      case 2:cout<<"Monday";break;
      case 3:cout<<"Tuesday";break;
      case 4:cout<<"Wednesday";break;
      case 5:cout<<"Thursday";break;
      case 6:cout<<"Friday";break;
      case 7:cout<<"Saturday";break;
      default:cout<<"INVALID NO";
    }
    }
};
int main()
{
    Days week;
    week.number();
}
