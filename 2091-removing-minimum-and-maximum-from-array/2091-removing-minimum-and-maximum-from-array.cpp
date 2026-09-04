class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
     int n = nums.size();
    if (n <= 2) return n;

    int min_idx = 0;
    int max_idx = 0;

    for(int i = 1; i < n; ++i) 
         {if(nums[i] < nums[min_idx]) 
            {min_idx = i;}
            if(nums[i] > nums[max_idx]) 
            {max_idx = i;} }

int left, right;
if (min_idx < max_idx) {
    left = min_idx;
    right = max_idx;
} else {
    left = max_idx;
    right = min_idx;
}

int del_front=right +1;
int del_back=n-left;
int del_both=(left+1)+(n-right);

int ans=del_front;
if(del_back<ans)
{ans=del_back;}
if(del_both<ans)
{ans=del_both;}

return ans;
    }
};