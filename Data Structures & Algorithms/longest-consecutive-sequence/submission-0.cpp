class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(int i: nums){
            if(st.find(i-1)==st.end()){
                int temp = 0;
                while(st.find(i++)!=st.end()){
                    temp++;
                }
                ans = max(ans, temp);
            }
        }
        return ans;
    }
};
