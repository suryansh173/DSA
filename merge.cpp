#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void merge (vector < int >&v1, vector < int >&v2, vector < int >&v3)
{
  int i = 0, j = 0, k = 0;
  while (i < v1.size () && j < v2.size ())
    {
      if (v1[i] < v2[j])
	{
	  v3[k] = v1[i];
	  k++;
	  i++;
	}
      else 
	{
	  v3[k] = v2[j];
	  k++;
	  j++;
	}
    }
  if (i == v1.size ())
    {
      while (j < v2.size ())
	{v3[k] = v2[j];
      k++;
      j++;}
    }
  if (j == v2.size ())
    {
      while (i < v1.size ())
	{v3[k] = v1[i];
      k++;
      j++;}
    }
}

int main ()
{
  int a[] = { 1, 4, 3, 7 };
  int b[] = { 8, 2, 5, 6, 9, 8 };
  int n1 = sizeof (a) / sizeof a[0];
  int n2 = sizeof (b) / sizeof b[0];
  vector < int >v1 (a, a + n1);
  vector < int >v2 (b, b + n2);
  vector < int >v3 (n1 + n2);
  merge (v1, v2, v3);
  cout<<"Only after merging:";
  for (int i = 0; i < v3.size (); i++)
    cout << v3[i]<<" ";
 
}
