class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";

        // If any string is empty, prefix must be empty
        for (auto &s : strs) {
            if (s.empty()) return "";
        }

        string ans = "";
        int idx = 0;

        // Find shortest string length
        int minLen = strs[0].size();
        for (auto &s : strs) {
            minLen = min(minLen, (int)s.size());
        }

        // Compare characters up to minLen
        while (idx < minLen) {
            char temp = strs[0][idx];
            for (auto &s : strs) {
                if (s[idx] != temp) {
                    return ans;
                }
            }
            ans += temp;
            idx++;
        }

        return ans;
    }
};
