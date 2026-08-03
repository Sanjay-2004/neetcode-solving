class Solution {
    bool isSame(char c, stack<char>& st){
        if(st.size() && ((c==')' && st.top()=='(') || (c==']' && st.top()=='[') || (c=='}' && st.top()=='{')))
            return true;
        return false;
    }
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c: s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
                continue;
            }
            if(isSame(c,st)){
                st.pop();
            } else {
                return false;
            }
        }
        return !st.size();
    }
};
