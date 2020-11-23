#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
     //
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
};

