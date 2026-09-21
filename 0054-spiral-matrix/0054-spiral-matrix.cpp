class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         if (matrix.empty() || matrix[0].empty()) return {};
        
        vector<int> result;
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;
        
        while (top <= bottom && left <= right) {
            // 1. Traverse from Left to Right along the top row
            for (int j = left; j <= right; ++j) {
                result.push_back(matrix[top][j]);
            }
            top++; // Shrink the top boundary
            
            // 2. Traverse from Top to Bottom along the right column
            for (int i = top; i <= bottom; ++i) {
                result.push_back(matrix[i][right]);
            }
            right--; // Shrink the right boundary
            
            // 3. Traverse from Right to Left along the bottom row (if a row still exists)
            if (top <= bottom) {
                for (int j = right; j >= left; --j) {
                    result.push_back(matrix[bottom][j]);
                }
                bottom--; // Shrink the bottom boundary
            }
            
            // 4. Traverse from Bottom to Top along the left column (if a column still exists)
            if (left <= right) {
                for (int i = bottom; i >= top; --i) {
                    result.push_back(matrix[i][left]);
                }
                left++; // Shrink the left boundary
            }
        }
        
        return result;
    }
};