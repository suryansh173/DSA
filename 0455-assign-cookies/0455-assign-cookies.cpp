class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int i=0;
        int j=0;

        int k=g.size();
        int l=s.size();

        sort(g.begin(),g.end());
        sort(s.begin(),s.end());

        while(i<k&&j<l)
        {if(g[i]<=s[j])
        {i++;}
        j++;}

        return i;
    }
};