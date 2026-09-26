class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finalres;
        for(int i=0;i<numRows;i++)
        { vector<int> res(i+1,1);

        for(int j=1;j<i;j++)
        {res[j] = finalres[i - 1][j - 1] + finalres[i - 1][j];}
        finalres.push_back(res);}
        
        return finalres;
    }
};