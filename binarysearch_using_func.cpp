#include<iostream>
using namespace std;
int binary (int *arr, int l, int h, int x)
{
  while (l <= h)
    {
      int mid = l + (h - l) / 2;
      if (arr[mid] == x)
	       return mid;
      if (arr[mid] < x)
	       l = mid + 1;
      else
	       h = mid - 1;
    }
  return -1;
}

int main ()
{
  int arr[] = { 1,2,3,4,5 };
  int n = sizeof (arr) / sizeof (arr[0]);
  int x;
  cout << "Enter the element to be searched:";
  cin >> x;
  int res = binary (arr, 0, n - 1, x);
  if (res == -1)
    cout << "Element not present in the array:";
  else
    cout << "Element found at array index:" << res;
  return 0;
}
