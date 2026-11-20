class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long long resXor = 0;
        for (int num : nums)
        {resXor ^= num;}

        long long rightmostSetbit = resXor & (-resXor);

        int num1 = 0, num2 = 0;
        for(int num : nums) 
        {if(num & rightmostSetbit) 
        {num1 ^= num;} 
        else 
        {num2 ^= num;}}
        return{num1,num2};
    }
};