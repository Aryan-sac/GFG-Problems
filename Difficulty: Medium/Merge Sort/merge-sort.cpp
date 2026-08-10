class Solution {
  public:
    void merge(vector<int>& arr, int l, int mid, int r){
        vector<int>temp;
        int st=l, end=mid+1;
        while(st<=mid && end<=r){
            if(arr[st] >= arr[end])
                temp.push_back(arr[end++]);
            else
                temp.push_back(arr[st++]);
        }
        while(st<=mid)
            temp.push_back(arr[st++]);
        while(end<=r)
            temp.push_back(arr[end++]);
            
        for(int i=0; i<temp.size(); i++){
            arr[l++] = temp[i];
        }
    }
    void mergeSort(vector<int>& arr, int l, int r) {
        // code here
        if(l>=r)
            return;
        int mid = (l+r)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};