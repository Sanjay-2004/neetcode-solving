class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        while(l<r){
            int mid = l + (r-l)/2;
            // l<m<r -> go left
            // r<l<m -> go right
            // m<r<l -> return
            int a = nums[l], b = nums[mid], c = nums[r];
            if(b>c){
                l = mid + 1;
            } else{
                r = mid;
            }
        }
        return nums[l];
    }
};
