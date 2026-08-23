class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
       int f= first(nums,n,target); 
       if(f==-1) return {-1,-1}; 
       int l=last(nums,n,target);
       return {f,l};
    }
private:
       int first(vector<int>&a,int n,int t)
{
int l=0;
int h=n-1;
int f=-1;
while(l<=h)
{int m=l+(h-l)/2;
if(a[m]==t)
{f=m;
h=m-1;}
else if(t<a[m]){
    h=m-1;
}
else{
    l=m+1;
}}
return f;}

int last(vector<int>&a,int n,int t)
{
int lo=0;
int h=n-1;
int l=-1;
while(lo<=h)
{int m=lo+(h-lo)/2;
if(a[m]==t)
{l=m;
lo=m+1;}
else if(t<a[m]){
    h=m-1;
}
else{
    lo=m+1;
}}
return l;}


};
