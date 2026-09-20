class Solution {
public:
    void reverseString(vector<char>& s) {
     int a=0;
     int b=s.size()-1;
     while(a<b)
     {char c=s[a];
    s[a]=s[b];
    s[b]=c;
    a++,b--;}
     for(char v:s)
     {cout<<v;}  
    }
};