class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
        
        vector<int> merge;
        int i = 0, j = 0;
        int total_size = n1 + n2;
        while (i < n1 || j < n2) {
            if (j >= n2 || (i < n1 && nums1[i] <= nums2[j])) {
                merge.push_back(nums1[i]);
                i++;
            } 
            else {
                merge.push_back(nums2[j]);
                j++;
            }
        }
        if (total_size % 2 != 0) {
            return merge[total_size / 2];
        } else {
            return (merge[(total_size / 2) - 1] + merge[total_size / 2]) / 2.0;
        }
    }
};