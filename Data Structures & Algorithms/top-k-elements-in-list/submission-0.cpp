class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i: nums) mp[i]++;
        priority_queue<pair<int,int>> pq;
        for(auto [k,v]: mp){
            pq.push({v,k});
        }
        vector<int> ans;
        while(k--){
            auto [a,b] = pq.top();
            pq.pop();
            ans.push_back(b);
        }
        return ans;
    }
};
