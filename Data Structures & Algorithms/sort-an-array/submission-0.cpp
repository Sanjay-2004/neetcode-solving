class Solution {

    void merge(int l, int mid, int r, vector<int>& ans){
        vector<int> left(mid-l+1), right(r-mid);
        for(int i = l, j = 0; i<=mid; i++,j++){
            left[j] = ans[i];
        }
        for(int i = mid+1, j=0; i<=r; i++, j++){
            right[j] = ans[i];
        }
        int i=0,j=0,k=l;
        while(i<left.size() && j<right.size()){
            if(left[i]<right[j]){
                ans[k] = left[i];
                i++;
            } else {
                ans[k] = right[j];
                j++;
            }
            k++;
        }
        while(i<left.size()){
            ans[k++] = left[i++];
        }
        while(j<right.size()){
            ans[k++] = right[j++];
        }
    }
    vector<int> mergeSort(vector<int>& nums, int l, int r){
        if(l==r) return nums;
        int mid = l+(r-l)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(l, mid, r, nums);

        return nums;
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};