class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ans = 0;
        int n = nums.size();
        int i = 0, j = 0;
        while(j<n){
            if(nums[j]!=val){
                nums[i++] = nums[j];
                ans++;
            }
            j++;
        }
        return ans;
    }
};