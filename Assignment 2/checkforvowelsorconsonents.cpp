#include<iostream>
using namespace std;
class VowelsOrNot
{
    char ch;
    public:void vowels()
    {
        cout<<"Enter an alphabet:";
        cin>>ch;
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            cout<<"Entered alphabet is vowel :";
        else
            cout<<"Entered alphabet is consonent:";
    }
};
int main()
{
    VowelsOrNot check;
    check.vowels();
}
