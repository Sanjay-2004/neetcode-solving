class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c: s){
            if((c>='a' && c<='z') || (c>='A' && c<='Z')){
                str.push_back(tolower(c));
            }
        }
        for(int i=0,j=str.size()-1;i<=j;i++,j--){
            if(str[i]!=str[j]) return false;
        }
        return true;
    }
};
