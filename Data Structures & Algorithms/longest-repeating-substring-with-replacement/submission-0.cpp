class Solution {
    int mostFreq(vector<int> &freq){
        return *max_element(freq.begin(),freq.end());
    }
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, ans = 0, n = s.size();
        vector<int> freq(26,0);
        while(r<n){
            freq[s[r]-'A']++;
            while(r-l+1 - mostFreq(freq)>k) {
                freq[s[l]-'A']--;
                l++;
            }
            ans = max(ans, r-l+1);
            r++;
        }
        return ans;
    }
};
