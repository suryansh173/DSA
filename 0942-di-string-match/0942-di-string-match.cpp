class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.size();
        int low = 0;
        int high = n;
        vector<int> result(n + 1);
        
        for(int i = 0; i < n; ++i) 
        {if(s[i] == 'I') 
        {result[i] = low;
        low++;} 
        else 
        {result[i] = high;
        high--; }
        }
        result[n] = low;
        return result;}
};