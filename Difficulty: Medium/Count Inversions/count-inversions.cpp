class Solution {
  public:
    int count=0;
    void merge(vector<int>&arr, int low, int mid, int high){
        vector<int>temp;
        int i=low, j=mid+1;
        while(i<=mid && j<=high){
            if(arr[i]<=arr[j]){
                temp.push_back(arr[i++]);
            }
            else{
                count += mid-i+1;
                temp.push_back(arr[j++]);
            }
        }
        while(i<=mid)
            temp.push_back(arr[i++]);
        while(j<=high)
            temp.push_back(arr[j++]);
        for(int k=low; k<=high; k++)
            arr[k] = temp[k-low];
    }
    void mergeSort(vector<int>&arr, int st, int end){
        
        if(st>=end)
            return;
        
        int mid = (st+end)/2;
        
        mergeSort(arr, st, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, st, mid, end);
    }
    int inversionCount(vector<int> &arr) {
        // code here
        mergeSort(arr, 0, arr.size()-1);
        return count;
    }
};