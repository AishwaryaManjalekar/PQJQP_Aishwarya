#include<iostream>
using namespace std;
class VowelsOrNot
{
    char choice,ch;
    public:void vowels()
    {
        cout<<"Enter an alphabet:";
        cin>>choice;

        switch(choice)
        {
        case 'a':cout<<"Entered character is vowel:";break;
        case 'e':cout<<"Entered character is vowel:";break;
        case 'i':cout<<"Entered character is vowel:";break;
        case 'o':cout<<"Entered character is vowel:";break;
        case 'u':cout<<"Entered character is vowel:";break;
        default:cout<<"It is a consonent:";
        }

    }
};
int main()
{
    VowelsOrNot check;
    check.vowels();
}
