// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        unordered_map<int,int> freq;
        int count = 0;
        for (int x : arr) {
            if (freq[x - k]) count += freq[x - k];
            if (freq[x + k]) count += freq[x + k];
            freq[x]++;
        }
        return count;
    }
};