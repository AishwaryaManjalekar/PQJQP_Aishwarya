#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{

     int a,b;
     if(argc<3||argc>4)
     {
         cout<<"enter 2 arguments only:";
         cin>>a>>b;
         return 0;
     }
        a=atoi(argv[1]);
        b=atoi(argv[2]);

        if(a<0||b<0)
        {
            cout<<"enter +ve no's only:";
            return 1;
        }
        if(!(a!=b && b!=a))
        {
            cout<<"enter 2 different no's";
            return 1;
        }
        else
        {
            if(a>b)
            {
                cout<<"the largest is :"<<a;
            }

            else
            {
                cout<<"the largest is :"<<b;
            }


        }
        return 0;
};
