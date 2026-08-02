class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for(char c: s){
            if((c>='a' && c<='z') || (c>='A' && c<='Z') || (c>='0' && c<='9')){
                str.push_back(tolower(c));
            }
        }
        cout<<str<<endl;
        for(int i=0,j=str.size()-1;i<=j;i++,j--){
            if(str[i]!=str[j]) return false;
        }
        return true;
    }
};
