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
void mergesort(vector<int> &v)
{int n=v.size();
if (n==1) 
{return;}
int n1=n/2;
int n2=n-n/2;
vector<int> a(n1),b(n2);
for(int i=0;i<n1;i++)
{a[i]=v[i];}
for(int i=0;i<n2;i++)
{b[i]=v[i+n1];}
mergesort(a);
mergesort(b);
merge(a,b,v);
}
int main()
{int a[]={4,8,2,3,1,7,9,6};
int n=sizeof (a)/sizeof a[0];
vector <int> v(a,a+n);
cout<<"Before merge sorting:";
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
mergesort(v);
cout<<"After after sorting:";
for(int i=0;i<v.size();i++)
{cout<<v[i]<<" ";}}