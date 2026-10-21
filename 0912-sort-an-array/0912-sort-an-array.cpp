class Solution {
private:
    void merge(vector<int>& nums, vector<int>& temp, int left, int mid, int right) 
    {
        int i = left;    
        int j = mid;     
        int k = left;    
        while(i< mid &&j < right) 
        {if(nums[i] <=nums[j]) 
        {temp[k] = nums[i];
        k++,i++; } 
        else 
        {temp[k] = nums[j];
        k++,j++; }
        }
        while(i < mid) 
        {
            temp[k] = nums[i];
            k++,i++;
        }
        while(j < right) 
        {
            temp[k] = nums[j];
            k++,j++;
        }

        for(int idx =left;idx < right;idx++) 
        {
            nums[idx] = temp[idx];
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
    int n = nums.size();
    if(n <= 1) return nums;  
      vector<int> temp(n);

      for(int width = 1; width < n; width *= 2) 
      {for(int i = 0; i < n; i += 2 * width) 
            {int left = i;
            int mid = min(i + width, n);
            int right = min(i + 2 * width, n);
               
                if (mid < right) 
                {
                    merge(nums, temp, left, mid, right);}
            }
        }

        return nums;
    }
};