class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int temp = 0;
        unordered_map<int,int> mp;
        mp[0] = 1;
        for(int i: nums){
            temp+=i;
            int diff = temp - k;
            if(mp.count(diff)){
                ans+=mp[diff];
            }
            mp[temp]++;
        }
        return ans;
    }
};