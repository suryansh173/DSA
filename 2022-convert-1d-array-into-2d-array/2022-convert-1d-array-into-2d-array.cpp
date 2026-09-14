class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
         if(original.size() != (long long)m * n) return {};  // preventing overflow a standard 32-bit int boundary.

         vector<vector<int>> res(m, vector<int>(n));

         for(int i = 0; i < original.size(); i++) 
         {
            res[i/n][i%n] = original[i];
         }

         return res;
    }
};