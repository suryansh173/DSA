class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.size();
        for(int len = n / 2; len >= 1; len--) 
        {if(n % len == 0) 
        {if(s.substr(0, n - len) == s.substr(len)) 
        {return true;}} }
        return false;
    }
};