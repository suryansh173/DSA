class Solution {
public:
    char findTheDifference(string s, string t) {
        char char_xor = 0;
        
        for(char c : s) char_xor ^= c;
        for(char c : t) char_xor ^= c;
        
        return char_xor;
    }
};