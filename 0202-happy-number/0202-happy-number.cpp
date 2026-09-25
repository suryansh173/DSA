class Solution {
private:
int split(int n)
{ int temp=0;
while(n>0)
{
 temp+=(n%10)*(n%10);
n=n/10;
}
return temp;};
public:
    bool isHappy(int n) {
        while(n>9)
        {n=split(n);}
        if(n==1||n==7)
        {return true;}
        return false;
    }
};