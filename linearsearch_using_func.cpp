#include<iostream>
using namespace std;
int linear (int *arr,int n,int x)
{
for(int i = 0; i < x; i++)
   { if(arr[i] == n)
      return i;
}
     return -1;
}
int main ()
{
  int arr[] = { 1,3,2,4,6 };
  int n;
  int x = sizeof arr / sizeof arr[0];
  cout << "Enter the element to be searched:";
  cin >> n;
  int res=linear (arr,n,x);
  if(res==-1)
  cout<<"Elemnet not present in the array";
  else
  cout<<"Element present at index:"<<res;
  return 0;
}
