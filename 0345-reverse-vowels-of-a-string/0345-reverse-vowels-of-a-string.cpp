class Solution {
public:
 bool isVowel(char c) 
 {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    string reverseVowels(string s) {
        int a = 0;
        int b = s.size() - 1;

        while(a < b) 
        {
            while(a < b && !isVowel(s[a])) 
            {
                a++;
            }
            while(a < b && !isVowel(s[b])) 
            {
                b--;
            }
            if(a < b) 
            {
                swap(s[a], s[b]);
                a++;
                b--;
            } }
        return s;
    }
};