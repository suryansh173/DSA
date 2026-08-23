class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int l=0;
      int h=nums.size()-1;
      if(target<nums[0]) return 0;
      else if (target>nums[h]) return h+1;
      while(l<=h)
      {int m=l+(h-l)/2;
      if(nums[m]==target)return m;
      else if(target>nums[m])
      {l=m+1;}
      else
      {h=m-1;}}  
      return l;
    }

};