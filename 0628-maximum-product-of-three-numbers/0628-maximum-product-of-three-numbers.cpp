class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int max1,max2,max3,min1,min2;
        max1=max2=max3=INT_MIN;
        min1=min2=INT_MAX;
        for(int n:nums)
        {
            if (n > max1) 
            {
                max3 = max2;
                max2 = max1;
                max1 = n;
            }
             else if (n > max2) 
             {
                max3 = max2;
                max2 = n;
            } 
            else if (n > max3) 
            {
                max3 = n;
            }

            if (n < min1) 
            {
                min2 = min1;
                min1 = n;
            } 
            else if (n < min2) 
            {
                min2 = n;
            }
        }
        int max_pro1=max1*max2*max3;
        int max_pro2=min1*min2*max1;
        if(max_pro1>max_pro2)
        {return max_pro1;}
        else
        {return max_pro2;}

    }
};