#include<iostream>
using namespace std;
class Floyd
{
    public:void numbers()
    {
      int i,j,rows,num=1;
      cout<<"enter no of rows:";
      cin>>rows;

      for(i=1;i<=rows;i++)
      {
       for(j=1;j<=i;j++)
          {
          cout<<num<<"\t";
           ++num;
          }
        cout<<"\n";
      }
    }
};
int main()
{
    Floyd value;
    value.numbers();
}

