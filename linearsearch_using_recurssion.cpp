#include<iostream>
using namespace std;
int linear (int *arr, int s, int n)
{
  if (s <= 0)
    return -1;
  if (arr[s - 1] == n)
    return s;
  else
    return linear (arr, s - 1, n);
}

int main ()
{
  int arr[] = { 1, 6, 5, 3, 2, 4, 7, 8 };
  int size = sizeof arr / sizeof arr[0];
  int n;
  cout << "Element to be searched:";
  cin >> n;
  int res = linear (arr, size, n);
  if (res == -1)
    cout << "Element not present in array";
  else
    cout << "Element found at position:" << res;
    return 0;
}
