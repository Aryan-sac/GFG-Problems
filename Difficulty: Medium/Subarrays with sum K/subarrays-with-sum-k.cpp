class Solution {
  public:
    int cntSubarrays(vector<int> &nums, int k) {
        // code here
        int n = nums.size();
        int count = 0;
        unordered_map<int, int> mp;
        long sum=0;
        for (int i=0; i<n; i++) {
            sum += nums[i];
            if(sum == k)count++;
            if(mp.find(sum-k) != mp.end()){
                count += mp[sum-k];
            }
            mp[sum]++;
        }
        return count;
    }
};