class Solution {
  public:
    bool twoSum(vector<int>& nums, int target) {
        // code here
        int n = nums.size();
        unordered_map<int, int>mp;
        vector<int>res;
        for(int i=0; i<n; i++){
            if(mp.find(target-nums[i]) != NULL)
                return true;
            mp[nums[i]] = i;
        }
        return false;
    }
};