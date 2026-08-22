class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n=numbers.size()-1;
        int l=0;
        int r=n;
        while(l<r)
        {int sum=numbers[l]+numbers[r];
        if(target<sum) r--;
        else if(target>sum) l++;
        else{
            return {l+1,r+1};
        }}
    return {};}
};