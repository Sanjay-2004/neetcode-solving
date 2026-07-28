class Solution {
    void updateMap(unordered_map<int,int> &mp){
    vector<int> toErase;
    for (auto &p : mp) {
        p.second--;
        if (p.second == 0) toErase.push_back(p.first);
    }
    for (int k : toErase) mp.erase(k);
}

public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i: nums){
            mp[i]++;
            if(mp.size()==3) updateMap(mp);
        }
        vector<int> ans;
        for(auto &[k,e]: mp){
            int cnt = 0;
            for(int i: nums){
                if(i==k) cnt++;
            }
            if(cnt>n/3) ans.push_back(k);
        }
        return ans;
    }
};