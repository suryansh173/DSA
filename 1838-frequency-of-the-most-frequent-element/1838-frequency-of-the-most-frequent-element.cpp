class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
         long long n = nums.size();
         sort(nums.begin(), nums.end());
         long long l = 0, r = 0;
         long long total = 0, res = 0;

         while(r < n)
         {
        total += nums[r];
        while(((long long)nums[r] * (r - l + 1) ) > (total + k))
        {total -= nums[l]; 
        l++;}
        res =max(res, (r - l + 1));
        r++;
    }
       return res; 
    }
};