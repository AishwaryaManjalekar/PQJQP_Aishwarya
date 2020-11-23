/*#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
     cout<<"enter the values:";
     cin>>argv[0]>>argv[1];
     {
      if(argv[0]>argv[1])
      {
          cout<<"\n The greatest is "<<argv[0];
      }
    else
      {
        cout<<"\n the greatest is "<<argv[1];
      }
     }
};*/
#include<stdio.h>
#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    //argc=1, argv[0]=commandline1
    if(argc!=2){
            printf("\nArgument not in correct format\n");
            exit(1);
    }
    //atoi is predefined function which converts the char into int type

    if(atoi(argv[1])%2==0)
        printf("\nEVEN NUMBER\n");
    else
        printf("\nODD NUMBER\n");

return 0;
}
