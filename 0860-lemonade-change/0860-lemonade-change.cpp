class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
      int n=bills.size();

      int dollar5_count=0;
      int dollar10_count=0;
      int i=0;

      while(i<n)
      {
        if(bills[i]==5)
      {dollar5_count ++;
      }
      
      else if(bills[i]==10)
      {if(dollar5_count>0)
      {dollar5_count --;
      dollar10_count ++;}
      else
      {return false;}}
      
      else if(bills[i]==20)
      {if(dollar10_count>0 && dollar5_count>0)
      {dollar10_count--;
      dollar5_count--;}
      else if(dollar10_count<1&&dollar5_count>2)
      {dollar5_count-=3;}
      else
      {return false;}}
      
      else
      {return false;}
      
      i++;}

    return true;
    }
};