class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int n1 = nums1.size();
    int n2 = nums2.size();
    int total = n1 + n2;
    
    int i = 0, j = 0;
    int m1 = 0, m2 = 0; 
        
    for (int count = 0; count <= total / 2; count++) {
            m2 = m1; 
            if (i < n1 && (j >= n2 || nums1[i] <= nums2[j])) 
            {
                m1 = nums1[i];
                i++;
            } 
            else 
            {
                m1 = nums2[j];
                j++;
            }}
        if (total % 2 != 0) 
        {
            return m1;
        }
        return (m1 + m2) / 2.0;
    }
};