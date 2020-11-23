#include<iostream>
#include<string.h>
using namespace std;
class Example
{
    int len;
    char str[12];
    public:void value()
    {
       cout<<"enter the string character:";
       cin>>str;
       len = strlen (str);
       cout<<len;
    }
};
int main()
{
  Example v1;
  v1.value();
}
