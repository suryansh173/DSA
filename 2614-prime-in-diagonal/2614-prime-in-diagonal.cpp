class Solution {
private:
     bool isPrime(int n)
       {if(n<=1) return false;
       if(n==2) return true;
       if(n%2==0) return false;
       for(int i=3;i<=sqrt(n);i+=2)
       {if(n%i==0)
       return false;}
       return true;}
public:
    int diagonalPrime(vector<vector<int>>& nums) {
       int maxprime=0;
       int n=nums.size();

       for(int i=0;i<n;i++)
       {int val1=nums[i][i];
        if(val1 > maxprime && isPrime(val1))
       {maxprime=val1;}

       int val2=nums[i][n-i-1];
       if(val2 > maxprime && isPrime(val2))
       {maxprime=val2;}

    }
    return maxprime;}
};