class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        int n = arr.size(), count=0, res = 0;
        int min_el = INT_MAX, max_el = INT_MIN;
        for(int i=0; i<n; i++){
            min_el = min(min_el, arr[i]);
            max_el = max(max_el, arr[i]);
        }
        unordered_map<int, int>mp;
        for(int i=0; i<n; i++)
            mp[arr[i]]++;
        
        while(min_el<=max_el){
            if(mp.find(min_el) != mp.end())
                count++;
            else
            {
                res = max(res, count);
                count = 0;
            }
            min_el++;
            res = max(res, count);
        }
        return res;
    }
};