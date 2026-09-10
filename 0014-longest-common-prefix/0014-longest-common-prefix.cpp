class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
          if (strs.empty()) return "";

    sort(strs.begin(), strs.end());

    const string& first = strs.front();  //using referensing
    const string& last = strs.back();

      int minLength = min(first.size(), last.size());
      int i = 0;

     while (i < minLength && first[i] == last[i]) 
     {i++;}

    return first.substr(0, i);
}
};