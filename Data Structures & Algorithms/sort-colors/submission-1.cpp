class Solution {
public:
    void sortColors(vector<int>& nums) {
        int arr[3] = {0,0,0};
        for(int i: nums){
            arr[i]++;
        }
        int k = 0;
        for(int i=0;i<3;i++){
            while(arr[i]){
                nums[k++] = i;
                --arr[i];
            }
        }
    }
};