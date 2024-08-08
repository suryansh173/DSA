#include<iostream>
using namespace std;
void bubble_sort(int *arr,int n)
{
    for(int i=0;i<n;i++)
    {for(int j=0;j<n-1;j++)
    if(arr[j]>arr[j+1])
    {int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;}}
    cout<<"Required array is:";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<'\t';
}
int main()
{int arr[]={1,3,5,4,2};
int n= sizeof arr/sizeof arr[0];
bubble_sort(arr,n);}