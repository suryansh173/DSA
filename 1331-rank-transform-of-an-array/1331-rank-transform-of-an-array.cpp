class Solution {
private:
    int getRank(const vector<int>& arr2, int target) 
    {int left = 0;
    int right = arr2.size() - 1;
        
    while(left <= right) 
        {int mid = left + (right - left) / 2;
            
            if(arr2[mid] == target) 
            {return mid + 1; 
            } 
            else if(arr2[mid] < target) 
            {left = mid + 1;
            } 
            else 
            {right = mid - 1;}}
        return -1;}
public:
    vector<int> arrayRankTransform(vector<int>& arr){
        vector<int> arr2 = arr;
        sort(arr2.begin(), arr2.end());
        arr2.erase(unique(arr2.begin(), arr2.end()), arr2.end()); //remove duplicate

        vector<int> result(arr.size());
        for(int i = 0; i < arr.size(); ++i) 
        {
        result[i] = getRank(arr2, arr[i]);
        }
        
        return result;
    }
};