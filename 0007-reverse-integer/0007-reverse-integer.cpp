class Solution {
public:
    int reverse(int x) {
      
        long long m=0;
        int n=0;
        while(x!=0)
        {  m=m*10;
        n=x%10;
        m=m+n;
        x=x/10;}
        if(m>INT_MAX||m<INT_MIN)
        {return 0;}
    return m;
    }
};