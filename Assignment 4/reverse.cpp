#include<iostream>
using namespace std;
class ReverseArray
{
    public : void accept()
     {
      int n;
      cout<<"enter the no of elements to be reversed:";
      cin >> n;
      int arr[n];
      int i;
      for(i = 0; i < n; i++)
        {
            cin >> arr[i];
      }
      cout <<" Reversed  is:\n";
      for(i = n-1; i >= 0; i--)
        {
            cout << arr[i] << "";
      }
      cout << endl;
      }
};
int main()
{
    ReverseArray rev;
    rev.accept();
}
