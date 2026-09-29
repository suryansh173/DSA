class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
   for (int i = 0; i < 4; ++i) {
            if (mat == target) {
                return true;
            }
            reverse(mat.begin(), mat.end());//reversing rows upside down
            int n = mat.size();
            for (int r = 0; r < n; ++r) {
                for (int c = r + 1; c < n; ++c) {
                    swap(mat[r][c], mat[c][r]);          //transpose of matrix
                }
            }
        }
        
        return false;     
    }
};