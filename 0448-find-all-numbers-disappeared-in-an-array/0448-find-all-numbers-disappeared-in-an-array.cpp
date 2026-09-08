class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
    int i = 0;
    while (i < nums.size()) 
    {
    int correctIndex = nums[i] - 1;
            
         if (nums[i] != nums[correctIndex]) 
        {int temp = nums[i];
        nums[i] = nums[nums[i] - 1];
        nums[correctIndex] = temp; } 
        else 
        {i++;}
        
        }
vector<int> result;
        for (int j = 0; j < nums.size(); j++) 
        {  if (nums[j] != j + 1) 
            {
                result.push_back(j + 1);
            }}
        return result;
    }
};