#include<iostream>
using namespace std;
int facto(int p)
{int temp1=1;
    for(int i=1;i<=p;i++)
    { 
        temp1*=i;
    }
    return temp1;}
int main()
{cout<<"Enter the value of n and r:";
int n,r;
cin>>n>>r;
cout<<"Value of combination is:"<<facto(n)/(facto(r)*facto(n-r))<<endl;
cout<<"Value of permutation is:"<<facto(n)/facto(n-r);
return 0;}