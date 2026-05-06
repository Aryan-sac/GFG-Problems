class Solution {
  public:
    bool hasTripletSum(vector<int> &nums, int target) {
        // Code Here
        int n=nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n; i++){
            int j=i+1, k=n-1;
            while(j<k){
                int sum = nums[i]+nums[j]+nums[k]; 
                if(sum == target)
                {
                    return true;
                }
                else if(sum > target)
                    k--;
                else
                    j++;
            }
        }
        return false;
    }
};