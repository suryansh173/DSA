class Solution {
private:
    void merge(vector<int>& nums, int left, int mid, int right) {
        vector<int> leftArr(nums.begin() + left, nums.begin() + mid + 1);
        vector<int> rightArr(nums.begin() + mid + 1, nums.begin() + right + 1);

        int i = 0;       // Pointer for leftArr
        int j = 0;       // Pointer for rightArr
        int k = left;    // Pointer for main nums array

         while (i < leftArr.size() && j < rightArr.size()) {
            if (leftArr[i] <= rightArr[j]) {
                nums[k] = leftArr[i];
                k++;
                i++;
            } else {
                nums[k] = rightArr[j];
                k++;
                j++;
            }
        }

         while (i < leftArr.size()) {           // copy remaining in leftarr
            nums[k++] = leftArr[i++];
        }

         while (j < rightArr.size()) {           // copy remaining in righttarr
            nums[k++] = rightArr[j++];
        }
    }


     void mergeSort(std::vector<int>& nums, int left, int right) {
        if (left >= right) return;
        
        int mid = left + (right - left) / 2;
        
        // Dividing here
        mergeSort(nums, left, mid);
        mergeSort(nums, mid + 1, right);
        
        // Merging here
        merge(nums, left, mid, right);
    }

public:
    vector<int> sortArray(vector<int>& nums) {
        if (nums.empty()) return nums;
        mergeSort(nums, 0, nums.size() - 1);
        return nums;
    }
};