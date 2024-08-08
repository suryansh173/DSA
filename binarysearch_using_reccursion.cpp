#include<iostream>
using namespace std;
int binary(int *arr,int l,int h,int x)
{while(l<=h)
{int m=l+(h-l)/2;
    if(arr[m]==x)
       return m;
    if(arr[m]<x)
       return binary(arr,(m+1),h,x);
    else
       return binary(arr,l,(m-1),x);
}
return -1;
}
int main()
{int arr[]={1,2,3,4,5};
int n=sizeof arr/sizeof arr[0];
int x;
cout<<"Enter the number to be searched:";
cin>>x;
int res=binary(arr,0,n-1,x);
if(res==-1)
cout<<"Elemnt not present in the array";
else
cout<<"Element found at index:"<<res;
}