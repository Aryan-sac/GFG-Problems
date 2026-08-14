class Solution {
  public:
    vector<int>res;
    void helper(vector<int>&arr, int idx, int sum){
        if(idx==arr.size()){
            res.push_back(sum);
            return;
        }
        
        helper(arr, idx+1, sum+arr[idx]);
        helper(arr, idx+1, sum);
        
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int sum=0;
        helper(arr, 0, sum);
        return res;
    }
};

/* vector<int>res;
    void helper(vector<int>&arr, int idx, int& sum){
        if(idx==arr.size()){
            res.push_back(sum);
            return;
        }
        for(int i=idx; i<arr.size(); i++){
            sum = sum+arr[i];
            helper(arr, i+1, sum);
            sum = sum-arr[i];
        }
    }
    vector<int> subsetSums(vector<int>& arr) {
        // code here
        int sum=0;
        helper(arr, 0, sum);
        return res;
    }*/