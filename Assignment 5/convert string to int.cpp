#include<iostream>
using namespace std;

    int main ()
    {
        const char *str1 ="1234";
        const char *str2 ="8904.909321";
        const char *str3 ="12 abc";

        int num1=atoi(str1);
        int num2=atoi(str2);
        int num3=atoi(str3);

        cout<<"\n the atoi of "<<str1<<" is  "<<num1;
        cout<<"\n the atoi of "<<str2<<" is  "<<num2;
        cout<<"\n the atoi of "<<str3<<" is  "<<num3;

        return 0;


    }

